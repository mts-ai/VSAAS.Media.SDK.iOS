//
//  CloudPlayerSDK.h
//  CloudSDK
//
//  Created by user on 17/01/2018.
//  Copyright © 2018 VXG Inc. All rights reserved.
//
#import "CloudCommonSDK.h"
#import <AVFoundation/AVFoundation.h>


@protocol  ICloudCObject
- (Boolean) HasError;
- (int) GetResultInt;
- (NSString*) GetResultStr;
@end

typedef NS_ENUM(int, CloudPlayerEvent) {
    TRIAL_VERSION = -999,
    CONNECTING = 0,
    CONNECTED = 1,
    STARTED = 2,
    PAUSED = 3,
    CLOSED = 6,
    EOS = 12,
    OUT_OF_RANGE = 13,
    SEEK_COMPLETED = 17,
    SEEK_FAILED = 18,
    SEEK_STARTED = 19,
    VIDEO_OUTPUT_FORMAT_CHANGED = 21,
    ERROR = 105,
    SOURCE_CHANGED  = 3000,
    POSITION_JUMPED = 3001,
    SOURCE_UNREACHABLE = 19000,
    SOURCE_ONLINE = 19001,
    SOURCE_OFFLINE = 19002,
    VIDEO_FIRST_FRAME = 20000,
    RECORD_STARTED = 20100,
    RECORD_STOPPED = 20101,
    RECORD_CLOSED = 20102,
    SOURCE_CHANGED_WAIT_RECORDS_UPLOAD_STARTED  = 20103,
    SOURCE_CHANGED_WAIT_RECORDS_UPLOAD_CONTINUE = 20104,
    SOURCE_CHANGED_WAIT_RECORDS_UPLOAD_STOPPED = 20105
};

typedef NS_ENUM(int, CPlayerStates) {
    CPlayerStateConnecting = 0,
    CPlayerStateConnected = 1,
    CPlayerStateStarted = 2,
    CPlayerStatePaused = 3,
    CPlayerStateClosed  = 4,
    CPlayerStateEOS = 12,
};

typedef NS_ENUM(int, CPlayerModes) {
    CPlayerModeLive  = 1 << 0,
    CPlayerModePlayback = 1 << 1
};

typedef NS_ENUM(int, CPlayerLocalRecordFlags) {
    CPlayerLocalRecordFlagsNoSart = 0x00000000,
    CPlayerLocalRecordFlagsAutoStart = 0x00000001,
    CPlayerLocalRecordFlagsSplitByTime = 0x00000002,
    CPlayerLocalRecordFlagsSplitBySize = 0x00000004,
    CPlayerLocalRecordFlagsDisableVideo = 0x00000008,
    CPlayerLocalRecordFlagsDisableAudio = 0x00000010,
    CPlayerLocalRecordFlagsPtsCorrection = 0x00000020,
    CPlayerLocalRecordFlagsFastStart = 0x00000040,
    CPlayerLocalRecordFlagsFragKeyframe = 0x00000080,
    CPlayerLocalRecordFlagsSystemTimeToPts = 0x00000100,
    CPlayerLocalRecordFlagsDefinedDuration = 0x00000200,
    CPlayerLocalRecordFlagsFragCustom = 0x00000480
};

typedef NS_ENUM(int, CPlayerLocalRecordStats) {
    CPlayerLocalRecordStatsLastError = 0, //last error
    CPlayerLocalRecordStatsDuration = 1, //in msec
    CPlayerLocalRecordStatsSize = 2, //in bytes
    CPlayerLocalRecordStatsDurationTotal = 3, //in msec
    CPlayerLocalRecordStatsSizeTotal = 4  //in bytes
};

typedef NS_ENUM(int, CCloudApiProtocolDefaults) {
    CCloudApiProtocolDefaultsUNSECURE = 0,
    CCloudApiProtocolDefaultsSECURE = 1
};

typedef NS_ENUM(int, CCloudApiProtocolType) {
    CCloudApiProtocolTypeHTTP = 0,
    CCloudApiProtocolTypeHTTPS = 1
};

typedef NS_ENUM(int, CPlayerLiveUrlType) {
    CPlayerLiveUrlTypeDefault = 0,
    CPlayerLiveUrlTypeRTMP = 1,
    CPlayerLiveUrlTypeRTMPS = 2,
    CPlayerLiveUrlTypeHLS = 3,
    CPlayerLiveUrlTypeRTSP = 4
};

typedef NS_ENUM(int, CPlayerBackwardUrlType) {
    CPlayerBackwardUrlTypeNone = 0,
    CPlayerBackwardUrlTypeDefault = 1,
    CPlayerBackwardUrlTypeRTMP = 2,
    CPlayerBackwardUrlTypeRTMPS = 3
};

typedef NS_ENUM(int, CPlayerPlaybackModes) {
    CPlayerPlaybackModeCloud = 1 << 0,
    CPlayerPlaybackModeMemoryCard = 1 << 1
};

typedef void (^CPlayerCallback)(CloudPlayerEvent status_code, id<ICloudCObject> player);

@protocol ICloudCPlayerCallback
-(void) Status:(CloudPlayerEvent) status_code
        object:(id<ICloudCObject>) player;
-(int) OnAudioMicrophoneFrameAvailable:(id<ICloudCObject>) player
                                 frame:(nonnull CMSampleBufferRef) frame
                         averageLevels:(nullable float*) avrLevels
                     averageLevelsSize:(size_t) avrLevelsSize;
@end

// protocol
@protocol CloudPlayerSDKDelegate<NSObject>

@optional
-(int) OnPlayingPositionChanged:(long long) position
                   withDuration:(long long) duration
                 withRangeStart:(long long) rangeStart
                   withRangeEnd:(long long) rangeEnd;
-(int) onSharedTokenWillExpireIn:(long long) deltaTimeInMs;

@end

@interface CPlayerConfig: NSObject
-(instancetype) init;
-(void) visibleControls:(Boolean) bControls;
-(Boolean) getVisibleControls;
-(void) videoDecoderType:(int) type;
-(int) getVideoDecoderType;
-(void) aspectRatio:(int) mode;
-(int)  getAspectRatio;
-(void) zoomAspectRatio:(int) zoom;
-(int) getZoomAspectRatio;
-(void) zoomMinAspectRatio:(int) zoom;
-(int) getZoomMinAspectRatio;
-(void) zoomMaxAspectRatio:(int) zoom;
-(int) getZoomMaxAspectRatio;
-(void) moveXAspectRatio:(int) x;
-(int) getMoveXAspectRatio;
-(void) moveYAspectRatio:(int) y;
-(int) getMoveYAspectRatio;
-(void) setMinLatency:(long) latency;
-(long) getMinLatency;
-(void) setBufferOnStart:(int) buffering_time;
-(int) getBufferOnStart;
-(void) setLicenseKey:(NSString*) license;
-(NSString*) getLicenseKey;

-(void) setFFRate:(int) rate;
-(int) getFFRate;

-(void) setEnableInternalGestureRecognizers:(int) values;
-(int) getEnableInternalGestureRecognizers;
-(void) setEnableInternalAudioSessionConfigure:(int) enable;
-(int) getEnableInternalAudioSessionConfigure;
-(void) setInternalAudioSessionMode:(NSString*) mode;
-(NSString*) getInternalAudioSessionMode;
-(void) setInternalAudioSessionCategory:(NSString*) category;
-(NSString*) getInternalAudioSessionCategory;
-(void) setInternalAudioSessionCategoryOptions:(NSUInteger) options;
-(NSUInteger) getInternalAudioSessionCategoryOptions;
-(void) setEnableInternalAudioUnitVPIO:(int) enable;
-(int) getEnableInternalAudioUnitVPIO;
-(void) setInternalWillResignActiveMode:(int) mode;
-(int) getInternalWillResignActiveMode;

-(void) setLatencyPreset:(int) preset;
-(int) getLatencyPreset;
- (void) setConnectionDetectionTime:(int) val;
- (int) getConnectionDetectionTime;
- (void) setConnectionNetworkProtocol:(int) val;
- (int) getConnectionNetworkProtocol;
- (void) setConnectionBufferingTime:(int) val;
- (int) getConnectionBufferingTime;

- (void) setPlayerType:(int) val;
- (int) getPlayerType;

-(void) setConnectionMonitorType:(int) type;
-(int) getConnectionMonitorType;

-(void) setLiveUrlType:(CPlayerLiveUrlType) type;
-(CPlayerLiveUrlType) getLiveUrlType;

-(void) setBackwardUrlType:(CPlayerBackwardUrlType) type;
-(CPlayerBackwardUrlType) getBackwardUrlType;

-(void) setPlaybackMode:(CPlayerPlaybackModes) type;
-(CPlayerPlaybackModes) getPlaybackMode;

-(void) setEnableReconnectOnErrorDataIO:(int) enable;
-(int) getEnableReconnectOnErrorDataIO;

-(void) setEnableReconnectOnVideoOutputFormatChanged:(int) enable;
-(int) getEnableReconnectOnVideoOutputFormatChanged;

-(void) setWorkaroundForceLiveUrlTypeForTokenWithPath:(CPlayerLiveUrlType) type;
-(CPlayerLiveUrlType) getWorkaroundForceLiveUrlTypeForTokenWithPath;

-(void) setWorkaroundWaitWhileRecordsUploaded:(int) valueInMs;
-(int) getWorkaroundWaitWhileRecordsUploaded;

-(void) setWorkaroundRemoveBackwardJumpsForGetPosition:(int) enable;
-(int) getWorkaroundRemoveBackwardJumpsForGetPosition;

-(void) setAdvancedOpenMode:(int) mode;
-(int) getAdvancedOpenMode;

-(void) setAdvancedSourcePtsModifyMode:(int) mode;
-(int) getAdvancedSourcePtsModifyMode;

-(void) setAdvancedOptionInitWithFastStreamDetection:(int) enable;
-(int) getAdvancedOptionInitWithFastStreamDetection;

-(void) setAdvancedOptionInitWithLowLatency:(int) enable;
-(int) getAdvancedOptionInitWithLowLatency;

-(void) setAdvancedOptionTcpNoDelay:(int) enable;
-(int) getAdvancedOptionTcpNoDelay;

-(void) setAdvancedOptionAnalyzeDuration:(int) valueInMs;
-(int) getAdvancedOptionAnalyzeDuration;

-(void) setAdvancedOptionProbeSize:(int) size;
-(int) getAdvancedOptionProbeSize;

-(void) setAdvancedOptionFpsProbeSize:(int) size;
-(int) getAdvancedOptionFpsProbeSize;

-(void) setAdvancedOptionFormatProbeSize:(int) size;
-(int) getAdvancedOptionFormatProbeSize;

-(void) setAdvancedOptionMaxProbePackets:(int) packets;
-(int) getAdvancedOptionMaxProbePackets;

-(void) setAdvancedOptionHlsReloadPlaylistInterval:(int) valueInSec;
-(int) getAdvancedOptionHlsReloadPlaylistInterval;

-(void) setAdvancedOptionHlsLiveStartIndex:(int) index;
-(int) getAdvancedOptionHlsLiveStartIndex;

-(void) setAdvancedOptionRtmpBuffer:(int) size;
-(int) getAdvancedOptionRtmpBuffer;

-(void) setAdvancedOptionRtmpLive:(NSString*) value;
-(NSString*) getAdvancedOptionRtmpLive;

-(void) setAdvancedOptionReconnectOnHttpError:(NSString*) codes;
-(NSString*) getAdvancedOptionReconnectOnHttpError;

-(void) setCloudApiPort:(int) port;
-(int) getCloudApiPort;

-(void) setCloudApiProtocolType:(CCloudApiProtocolType) type;
-(CCloudApiProtocolType) getCloudApiProtocolType;

-(void) setCloudApiProtocolDefaults:(CCloudApiProtocolDefaults) type;

-(void) setShareTokenExpireCheckingTickRate:(long long) rateInMs;
-(long long) getShareTokenExpireCheckingTickRate;

-(void) setShareTokenExpireNotificationDeltaTimeGuard:(long long) deltaTimeGuardInMs;
-(long long) getShareTokenExpireNotificationDeltaTimeGuard;

// local record config
-(NSString*) getLocalRecordPath;
-(void) setLocalRecordPath:(NSString*) path;

-(CPlayerLocalRecordFlags) getLocalRecordFlags; // 0: stopped. 1: autostart rec. see PlayerRecordFlags
-(void) setLocalRecordFlags:(CPlayerLocalRecordFlags) flags;

-(uint64_t) getLocalRecordFrameDuration; // duration in ms , workaround for some server that provide wrong PTS
-(void) setLocalRecordFrameDuration:(uint64_t) duration;

-(uint64_t) getLocalRecordSplitTime; // seconds. in case PP_RECORD_SPLIT_BY_TIME
-(void) setLocalRecordSplitTime:(uint64_t) time;

-(uint64_t) getLocalRecordSplitSize; // MB.   in case PP_RECORD_SPLIT_BY_SIZE
-(void) setLocalRecordSplitSize:(uint64_t) size;

-(NSString*) getLocalRecordPrefix;
-(void) setLocalRecordPrefix:(NSString*) prefix;

-(int64_t) getLocalRecordTrimPosStart; // in ms. (-1) not set, all duration.
-(void) setLocalRecordTrimPosStart:(int64_t) startPos;

-(int64_t) getLocalRecordTrimPosEnd; // in ms. (-1) not set, all duration.
-(void) setLocalRecordTrimPosEnd:(int64_t) endPos;

+ (void)setLogLevel:(int) newValue;
+ (void)setMediaPlayerLogLevelForObjcPart:(int) objcValue
                            forNativePart:(int) nativeValue
                             forMediaPart:(int) mediaValue;

@end

@interface CloudPlayerSDK: NSObject<ICloudCObject>
+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

-(instancetype)initWithParams:(UIView*) view
                       config:(CPlayerConfig*) config
                     callback:(CPlayerCallback) callbacks;

-(instancetype)initWithParams:(UIView*) view
                       config:(CPlayerConfig*) config
            protocol_callback:(id<ICloudCPlayerCallback>) callbacks;

-(void) setDelegate:(id<CloudPlayerSDKDelegate>) delegate;
-(id<CloudPlayerSDKDelegate>) getDelegate;

-(int) setSource:(NSString* _Nullable) source;
-(int) setSource:(NSString* _Nullable) source
    withPosition:(long long) position;
-(int) setSource:(NSString* _Nullable) source
    withPosition:(long long) position
     withLiveUrl:(NSString* _Nullable (^ _Nullable)(CPlayerLiveUrlType type)) liveProvider // if not nil, return url according requested live url type
 withBackwardUrl:(NSString* _Nullable (^ _Nullable)(void)) backwardProvider; // if not nil, return audio backward url

-(int) setConfig:(CPlayerConfig* _Nonnull) config;
-(CPlayerConfig* _Nullable) getConfig;

-(void) play;
-(void) pause;
-(void) close;

-(CPlayerStates) getState;
-(void) setPrefferedMode:(CPlayerModes)mode;
-(CPlayerModes) getPrefferedMode;

-(void) setPosition:(long long) nPosition;
-(void) setPosition:(long long) nPosition
        onComplete:(void (^ _Nonnull)(int)) complete;

-(long long) getPosition;
-(Boolean) isLive;

-(void) mute:(Boolean) bMute;
-(Boolean) isMute;

-(void) showTimeline:(UIView*) vwTimeline;
-(void) showTimeline:(UIView*) timelineContainer withCalendarContainer:(UIView*) calendarContainer;
-(CTimelineConfig*) getTimelineConfig;
-(void) applyTimelineConfig;
-(void) setTimelineStyle:(UIColor* _Nonnull) main
               lineColor:(UIColor* _Nonnull) line
               textColor:(UIColor* _Nonnull) text
     textBackgroundColor:(UIColor* _Nonnull) textBackground
              trackColor:(UIColor* _Nonnull) track
               knobColor:(UIColor* _Nonnull) knob
             strokeColor:(UIColor* _Nonnull) stroke
              rangeColor:(UIColor* _Nonnull) range;
-(void) setTimelineStyle:(CTimelineStyle* _Nonnull) style;
-(CTimelineStyle*_Nonnull) getTimelineStyle;
-(void) setTimelineScale:(CTimelineScaleType) scale;
-(CTimelineScaleType) getTimelineScale;

-(void) setRange:(int64_t) start_time
        end_time:(int64_t) end_time;
-(void) getRange:(int64_t* _Nonnull) start_time
        end_time:(int64_t* _Nonnull) end_time;
-(void) unsetRange;
-(void) hideTimeline;

-(long long) getID;

-(NSString*) getPreviewURLSync;
-(void) getPreviewURL:(void (^ _Nonnull)(NSObject* _Nullable obj, int status)) complete;
-(CPreviewImage*) getPreviewImageSync;
-(void) getPreviewImage:(void (^ _Nonnull)(NSObject* _Nullable, int)) complete;

-(int) getVideoShot:(void* _Nonnull) buffer
        buffer_size:(int32_t* _Nonnull) buffer_size
              width:(int32_t* _Nonnull) width
             height:(int32_t* _Nonnull) height
      bytes_per_row:(int32_t* _Nonnull) bytes_per_row;
- (int) getViewSizesAndVideoAspects:(int32_t* _Nonnull) view_orientation
                         view_width:(int32_t* _Nonnull) view_width
                        view_height:(int32_t* _Nonnull) view_height
                        video_width:(int32_t* _Nonnull) video_width
                       video_height:(int32_t* _Nonnull) video_height
                        aspect_left:(int32_t* _Nonnull) aspect_left
                         aspect_top:(int32_t* _Nonnull) aspect_top
                       aspect_width:(int32_t* _Nonnull) aspect_width
                      aspect_height:(int32_t* _Nonnull) aspect_height
                        aspect_zoom:(int32_t* _Nonnull) aspect_zoom;

- (void) setFFRate:(int32_t) rate;
- (void) updateView;

-(long long) getTimeLive;
-(void) setTimeLive:(long long) utc_time;
-(void) setTimezone:(NSString*) tz;
-(NSString*) getTimezone;

-(void) setName:(NSString*) name;
-(NSString*) getName;

-(CCStatus) getStatus;
-(NSDictionary*) getEventsInfo;
-(Boolean) getPublic;
-(void) setPublic:(Boolean) isPublic;
-(Boolean) isOwner;

-(CCRecordingMode) getRecordingMode;
-(void) setRecordingMode:(CCRecordingMode) rec_mode;

// local record
- (void) localRecordSetup:(NSString*) path
                    flags:(CPlayerLocalRecordFlags) flags
                splitTime:(int32_t) splitTime
                splitSize:(int32_t) splitSize
                   prefix:(NSString*) prefix;
-(Boolean) isLocalRecordStarted;
-(void) localRecordStart;
-(void) localRecordStop;
-(int64_t) localRecordGetStat:(CPlayerLocalRecordStats) param;
-(NSString*) localRecordGetFileName:(int32_t) param;

-(CCPrivacyMode) getPrivacyMode;
-(void) setPrivacyMode:(CCPrivacyMode) mode;

-(NSString*) getBackwardUrl;
-(void) getLiveUrls:(void (^ _Nonnull)(NSObject* _Nullable, int)) complete;

-(NSMutableArray<NSString*>*) getActivitySync:(Boolean) isCameraId
                                        start:(long long) start
                                          end:(long long) end
                                       events:(NSString*) events
                                   boundstime:(NSNumber*) isBoundstime
                                  daysincamtz:(NSNumber*) isDaysincamtz
                                        limit:(int) limit
                                       offset:(int) offset;
-(int) getActivity:(Boolean) isCameraId
             start:(long long) start
               end:(long long) end
            events:(NSString*) events
        boundstime:(NSNumber*) isBoundstime
       daysincamtz:(NSNumber*) isDaysincamtz
             limit:(int) limit
            offset:(int) offset
        onComplete:(void (^ _Nonnull)(NSObject* _Nullable, int)) complete;
-(NSMutableArray<NSString*>*) getCalendarSync:(long long) start
                                          end:(long long) end
                                        limit:(int) limit
                                       offset:(int) offset;

-(int) getRecords:(long long) start
              end:(long long) end
            order:(Boolean) isAscending
            limit:(long) limit
           offset:(long) offset
       onComplete:(void (^ _Nonnull)(NSObject *, int)) complete;
-(int) getRecords:(long long) start
              end:(long long) end
            order:(Boolean) isAscending
            limit:(long) limit
           offset:(long) offset
      isTempFiles:(NSNumber*) isTempFiles
       onComplete:(void (^ _Nonnull)(NSObject *, int)) complete;

-(int) getCalendar:(long long) start
               end:(long long) end
             limit:(int) limit
            offset:(int) offset
        onComplete:(void (^ _Nonnull)(NSObject* _Nullable, int)) complete;

-(NSDictionary*) getImagesSync:(long long) start
                           end:(long long) end
                         limit:(uint) limit
                        offset:(uint) offset
                         order:(Boolean) is_ascending;
-(int) getImages:(long long) start
             end:(long long) end
           limit:(uint) limit
          offset:(uint) offset
           order:(Boolean) is_ascending
      onComplete:(void (^ _Nonnull)(NSObject* _Nullable, int)) complete;

-(CTimeline*) getTimelineSync:(long long) start
                          end:(long long) end;
-(int) getTimeline:(long long) start
               end:(long long) end
        onComplete:(void (^ _Nonnull)(NSObject* _Nullable, int)) complete;
-(NSDictionary*) getTimelineThumbnailsSync:(long long) start
                                       end:(long long) end
                                     order:(Boolean) is_ascending;
-(int) getTimelineThumbnails:(long long) start
                         end:(long long) end
                       order:(Boolean) is_ascending
                  onComplete:(void (^ _Nonnull)(NSObject* _Nullable, int)) complete;
-(int) getTimelineThumbnails:(long long) start
                         end:(long long) end
                      origin:(NSString*) origin
                   originIds:(NSArray*) originIds
                       limit:(uint) limit
                      offset:(uint) offset
                       order:(Boolean) is_ascending
                  onComplete:(void (^ _Nonnull)(NSObject *, int)) complete;

//events
-(NSDictionary*) getEventsSync:(long long) start
                           end:(long long) end
                         limit:(long) limit
                        offset:(long) offset
                        events:(NSString*) events
                         order:(Boolean) is_ascending;
-(int) getEvents:(long long) start
             end:(long long) end
           limit:(long) limit
          offset:(long) offset
          events:(NSString*) events
           order:(Boolean) is_ascending
      onComplete:(void (^ _Nonnull)(NSObject* _Nullable, int)) complete;
-(int) getEvent:(long long) eventid
     onComplete:(void (^ _Nonnull)(NSObject* _Nullable, int)) complete;
-(void) triggerEvent:(NSString*) name
            withTime:(NSString*) time
            withMeta:(NSDictionary*) meta
            complete:(void (^ _Nonnull)(NSObject* _Nullable obj, int status)) complete;
-(int) deleteEvent:(long long) eventid
        onComplete:(void (^ _Nonnull)(NSObject* _Nullable, int)) complete;

//clips
-(int) getClips:(long long) start
            end:(long long) end
          limit:(long) limit
         offset:(long) offset
          order:(Boolean) is_ascending
     onComplete:(void (^ _Nonnull)(NSObject* _Nullable, int)) complete;
-(int) getClips:(long long) start
            end:(long long) end
          limit:(long) limit
         offset:(long) offset
          order:(Boolean) is_ascending
        orderBy:(COrderByValue) orderValue
     onComplete:(void (^ _Nonnull)(NSObject* _Nullable, int)) complete;
-(int) createClip:(NSString*) title
            start:(long long) start
              end:(long long) end
         deleteAt:(long long) delete_at
       onComplete:(void (^ _Nonnull)(NSObject* _Nullable, int)) complete ;
-(int) getClip:(long long) clipid
    onComplete:(void (^ _Nonnull)(NSObject* _Nullable, int)) complete ;
-(int) deleteClip:(long long) clipid
       onComplete:(void (^ _Nonnull)(NSObject* _Nullable, int)) complete;

//ptz
-(void) getPTZ:(void (^ _Nonnull)(NSObject* _Nullable, int)) complete;
-(void) executePTZ:(NSString*) action
           timeout:(NSNumber*) timeout
        onComplete:(void (^ _Nonnull)(NSObject* _Nullable, int)) complete;

//settings
-(void) getStreams:(void (^ _Nonnull)(NSObject* _Nullable obj, int status)) complete;
-(void) getVideoStreamByVsid:(NSString*) vsid
                    callback:(void (^ _Nonnull)(NSObject* _Nullable obj, int status)) complete;
-(void) updateVideoStreamByVsid:(NSString*) vsid
               resolution_width:(uint32_t) rwidth
              resolution_height:(uint32_t) rheight
                            fps:(float) fps
                            gop:(uint32_t) gop
                       complete:(void (^ _Nonnull)(NSObject* _Nullable obj, int status)) complete;
-(void) getCameraVideoSettings:(void (^ _Nonnull)(NSObject* _Nullable obj, int status)) complete;
-(void) updateCameraVideoSettings:(NSDictionary*) vsettings
                         complete: (void (^ _Nonnull)(NSObject* _Nullable obj, int status)) complete;
-(void) getCameraOSD:(void (^ _Nonnull)(NSObject* _Nullable obj, int status)) complete;
-(void) updateCameraOSD:(NSDictionary*) osdsettings
               complete: (void (^ _Nonnull)(NSObject* _Nullable obj, int status)) complete;
-(void) getCameraMotionDetection:(void (^ _Nonnull)(NSObject* _Nullable obj, int status)) complete;
-(void) updateCameraMotionDetection:(NSDictionary*) settings
                           complete:(void (^ _Nonnull)(NSObject* _Nullable obj, int status)) complete;
-(void) updateCameraAudio:(NSDictionary*) settings
                 complete:(void (^ _Nonnull)(NSObject* _Nullable obj, int status)) complete;
-(void) getCameraAudio:(void (^ _Nonnull)(NSObject* _Nullable obj, int status)) complete;

//wifi settings
-(void) getCameraWifiListLimit:(unsigned int) limit
                        offset:(unsigned int) offset
                      callback:(void (^ _Nonnull)(NSObject* _Nullable obj, int status)) complete ;
-(void) updateCameraWifiList:(void (^ _Nonnull)(NSObject* _Nullable obj, int status)) complete ;
-(void) getCameraSelectedWifi:(void (^ _Nonnull)(NSObject* _Nullable obj, int status)) complete ;
-(void) setCameraSelectedWifi:(NSDictionary*) wifiInfo
                     callback:(void (^ _Nonnull)(NSObject* _Nullable obj, int status)) complete ;

// memory card
-(int) getMemoryCardInfo:(void (^ _Nonnull)(NSObject* _Nullable obj, int status)) complete;
-(int) getMemoryCardTimeline:(long long) start
                         end:(long long) end
                pollingDelay:(int) delayInMs
               isInterrupted:(Boolean (^)(void)) isInterrupted
               onRequestedId:(void (^)(NSString* rid)) requestedId
             onPendingStatus:(void (^)(NSObject* _Nullable obj, int status)) pendingStatus
                  onComplete:(void (^ _Nonnull)(NSObject* _Nullable obj, int status)) complete;
-(int) synchronizeMemoryCard:(long long) start
                         end:(long long) end
                pollingDelay:(int) delayInMs
               isInterrupted:(Boolean (^)(void)) isInterrupted
               onRequestedId:(void (^)(NSString* rid)) requestedId
             onPendingStatus:(void (^)(NSObject* _Nullable obj, int status)) pendingStatus
       onSegmentSynchronized:(void (^)(NSObject* _Nullable obj, int status)) segmentSynchronized
                  onComplete:(void (^ _Nonnull)(NSObject* _Nullable obj, int status)) complete;
-(int) cancelSynchronizeMemoryCard:(NSString*) rid
                        onComplete:(void (^ _Nonnull)(NSObject* _Nullable obj, int status)) complete;

-(void) setLngLtdBounds:(double) latitude
                       :(double) longitude;
-(double) getLat;
-(double) getLng;

-(Boolean) HasError;
-(int) GetResultInt;
-(NSString*) GetResultStr;

-(void) setProxyDelegate: (id<CloudProxyNetworkRequests>) proxyRequests;

-(int) refreshSync;
-(int) saveSync;
-(int) refresh: (void (^ _Nonnull)(NSObject* _Nullable obj, int status)) complete;
-(int) save: (void (^ _Nonnull)(NSObject* _Nullable obj, int status)) complete;

-(int) GetStatusCallbackLastParam;

+(NSString*) getVersion;

@end
