//
//  MediaCaptureSDK.h
//  MediaCaptureSDK
//
//  Copyright © 2017 VXG Inc. All rights reserved.
//
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

typedef NS_ENUM(int, StreamType){
    STREAM_TYPE_UNKNOWN = 0,
    STREAM_TYPE_RTMP_PUBLISH = 1,
    STREAM_TYPE_RTSP_SERVER = 2,
    STREAM_TYPE_AMOUNT = 3
};

typedef NS_ENUM(int, VideoFormat){
    VIDEO_FORMAT_H264 = 0,
    VIDEO_FORMAT_NONE = 1
};

typedef NS_ENUM(int, AudioFormat){
    AUDIO_FORMAT_AAC = 0,
    AUDIO_FORMAT_ULAW = 1,
    AUDIO_FORMAT_ALAW = 2,
    AUDIO_FORMAT_NONE = 4
};

typedef NS_ENUM(int, CaptureNotifyCodes){
    CAPTURE_VIDEO_OPENED    = 0,
    CAPTURE_VIDEO_STARTED   = 1,
    CAPTURE_VIDEO_STOPED    = 2,
    CAPTURE_VIDEO_CLOSED    = 3,
    CAPTURE_AUDIO_OPENED    = 4,
    CAPTURE_AUDIO_STARTED   = 5,
    CAPTURE_AUDIO_STOPED    = 6,
    CAPTURE_AUDIO_CLOSED    = 7,
    ENCODER_VIDEO_OPENED    = 8,
    ENCODER_VIDEO_STARTED   = 9,
    ENCODER_VIDEO_STOPED    = 10,
    ENCODER_VIDEO_CLOSED    = 11,
    ENCODER_AUDIO_OPENED    = 12,
    ENCODER_AUDIO_STARTED   = 13,
    ENCODER_AUDIO_STOPED    = 14,
    ENCODER_AUDIO_CLOSED    = 15,
    MUXREC_OPENED           = 16,
    MUXREC_STARTED          = 17,
    MUXREC_STOPED           = 18,
    MUXREC_CLOSED           = 19,
    MUXRTMP_OPENED          = 20,
    MUXRTMP_STARTED         = 21,
    MUXRTMP_STOPED          = 22,
    MUXRTMP_CLOSED          = 23,
    MUXRTSP_OPENED          = 24,
    MUXRTSP_STARTED         = 25,
    MUXRTSP_STOPED          = 26,
    MUXRTSP_CLOSED          = 27,
    RENDER_OPENED           = 28,
    RENDER_STARTED          = 29,
    RENDER_STOPED           = 30,
    RENDER_CLOSED           = 31,
    FULL_CLOSE              = 32,

    // advanced
    MUXREC_VIDEO_FIRSTFRAME_RECORDED = 1000,
    MUXREC_AUDIO_FIRSTFRAME_RECORDED = 1001
};

typedef NS_ENUM(int, LogLevels){
    LL_QUIET    = -1,
    LL_PANIC    = 0,
    LL_FATAL    = 1,
    LL_ERROR    = 2,
    LL_WARNING  = 3,
    LL_INFO     = 4,
    LL_DEBUG    = 5,
    LL_VERBOSE  = 6,
    LL_TRACE    = 7,
    LL_ALL      = 8
};

typedef NS_ENUM(int, CaptureDevicePosition){
    Back,
    Front,
    BackOnly,
    FrontOnly
};

typedef NS_ENUM(int, CaptureDeviceOrientation){
    Landscape,
    Portrait
};

extern int VXG_CaptureSDK_LogLevel;
extern int VXG_CaptureSDK_Media_LogLevel;
extern NSDictionary* VXG_CaptureSDK_LogFilter;

extern int VXG_CaptureSDK_ffmpeg_inited;

void LogElement(int loglevel, NSString* element, NSString *format, ... );
typedef void (^MediaCaptureExternalAudioSourceDataProviderBlock)(CMSampleBufferRef frame, float* avrLevels, size_t avrLevelsSize);

@protocol MediaCaptureCallback;

@interface MediaCaptureConfig : NSObject
-(void) setPreview: (UIView*) previewView;
-(UIView*) getPreview;
-(int) setVideoConfig: (int) width : (int) height : (int) framerate : (long long) bitrate;
-(int) getInputWidth;
-(int) getInputHeight;
-(int) getInputFramerate;
-(long long) getBitrate;
-(int) setSecVideoConfig: (int) width : (int) height : (int) framerate : (long long) bitrate;
-(int) getSecWidth;
-(int) getSecHeight;
-(int) getSecFramerate;
-(long long) getSecBitrate;
-(void) setBitrateLimit:(Boolean) isLimited;
-(Boolean) isBitrateLimit;

-(int) setRTMPurl: (NSString*) url;
-(NSString*) getRTMPurl;

- (int) setRTSPport: (int) port;
- (int) getRTSPport;

-(int) setSecRTMPurl: (NSString*) url;
-(NSString*) getSecRTMPurl;

- (enum StreamType) getStreamType;
- (int) setStreamType: (enum StreamType) type;

- (enum VideoFormat) getVideoFormat;
- (int) setVideoFormat: (enum VideoFormat) format;

- (enum AudioFormat) getAudioFormat;
- (int) setAudioFormat: (enum AudioFormat) format;
- (void) setAudioSamplingRate:(int64_t)sample_rate;
- (int64_t) getAudioSamplingRate;
- (UInt32) getAACEncodeBitrate;
- (int) setAACEncodeBitrate: (UInt32) bitrate;
-(Boolean) isAudioInputMute;
- (void) setAudioInputMute:(Boolean) isMute;

-(void) setLicenseKey: (NSString*) license_key;

-(enum CaptureDevicePosition) getDevicePosition;
-(void) setDevicePosition: (enum CaptureDevicePosition) devornt;

-(enum CaptureDeviceOrientation) getDeviceOrientation;
- (void) setDeviceOrientation:(enum CaptureDeviceOrientation)devornt;

-(void) setRecordPath: (NSString*) path; //path in document directory
-(NSString*) getRecordPath;

-(void) setRecordFileLength: (int) seconds; //0 - unlimiited, >0 - seconds
-(int) getRecordFileLength;
-(void) freeDiskSpaceLimit: (uint64_t) megabytes;
-(uint64_t) getFreeDiskSpaceLimit;

-(void) setUsesApplicationAudioSession: (BOOL) enable; // Default: YES
-(BOOL) getUsesApplicationAudioSession;

-(void) setAutomaticallyConfiguresApplicationAudioSession: (BOOL) enable; // Default: YES
-(BOOL) getAutomaticallyConfiguresApplicationAudioSession;

// advanced
-(void) setStreamerAudioMuxerInputBufferSize: (int) size;
-(int) getStreamerAudioMuxerInputBufferSize;

-(void) setStreamerVideoMuxerInputBufferSize: (int) size;
-(int) getStreamerVideoMuxerInputBufferSize;

-(void) setStreamerMuxerReorderByPtsBufferSize: (int) size
                           andStartReorderSize: (int) start_size;
-(void) getStreamerMuxerReorderByPtsBufferSize: (int*) size
                           andStartReorderSize: (int*) start_size;

// external audio source, for example microphone callback on user side
-(void) setUseExternalAudioSource: (BOOL) use; // Default: NO
-(BOOL) isExternalAudioSourceUsed;
-(void) setExternalAudioSourceStreamBasicDescription:(AudioStreamBasicDescription*)desc;
-(AudioStreamBasicDescription*) getExternalAudioSourceStreamBasicDescription;

@property (nonatomic) int advancedAudioInputEnablePreprocessing; // 0 - disable, 1 - based on ffmpeg graph, 2 - custom
@property (nonatomic) NSMutableArray<NSDictionary*>* advancedAudioInputPreprocessingFilters; // key - name, value - config

// iOS specific
-(void) setInternalDidEnterBackgroundHandling: (int) state; // 0 - disabled, 1 - will be stopped if not already. Default: 1
-(int) getInternalDidEnterBackgroundHandling;

-(void) setInternalWillResignActiveHandling: (int) state; // 0 - disabled, 1 - will be stopped if not already. Default: 1
-(int) getInternalWillResignActiveHandling;

-(void) setInternalWillEnterForegroundHandling: (int) state; // 0 - disabled, 1 - will be started if not already. Default: 1
-(int) getInternalWillEnterForegroundHandling;

-(void) setInternalDidBecomeActiveHandling: (int) state; // 0 - disabled, 1 - will be started if not already. Default: 1
-(int) getInternalDidBecomeActiveHandling;

-(void) setInternalWillTerminateHandling: (int) state; // 0 - disabled, 1 - will be closed if not already. Default: 1
-(int) getInternalWillTerminateHandling;

-(void) setInternalAudioEnableStreamDump: (BOOL) enable;

@end

@protocol MediaCaptureCallback <NSObject>
- (int) Status: (NSString*) who : (int) arg;
@optional
-(void) audioData: (void*) data withSize: (long long) datasize withTimestamp:(int64_t) pts andDuration:(int64_t) duration peak: (float) peak;
-(void) videoData: (CVImageBufferRef) data withTimestamp: (CMTime) pts andDuration: (CMTime) duration;
-(int) fileCreated:(NSString*) filename fullpath: (NSString*) fullpath type: (NSString*) filetype;
-(int) additionalInfo: (NSDictionary*) info;
@end

@interface MediaRecorder : NSObject<MediaCaptureCallback>

@property (nonatomic, copy) MediaCaptureExternalAudioSourceDataProviderBlock externalAudioSourceDataProviderBlock;

- (id) init;
- (int) Open:(MediaCaptureConfig*)cfg callback:(id<MediaCaptureCallback>) cbk;
- (void) Close;
- (void) Start;
- (void) Stop;
- (void) StartStreaming;
- (void) StopStreaming;
- (void) StartRecording;
- (void) StopRecording;
- (long) GetDuration;
- (long) GetVideoPackets;
- (long) GetAudioPackets;
- (UIImage*) getVideoShot;

-(void) changeCapturePosition;
-(void) changeCaptureOrientation;

+ (NSArray<NSDictionary*>*) getFormats;
+ (NSArray<NSDictionary*>*) getFormatsForFront: (Boolean)isFront andBack:(Boolean)isBack;
-(int) changeVideoEncoderBitrate: (int) bitPerSec;

-(void) MuteMicrophone: (Boolean) isMute;

+ (NSString*) getVersion;

@end

typedef MediaRecorder MediaCapture;

typedef NS_ENUM(int, RtspConnectionType){
    RTSP_CONN_AUTO,
    RTSP_CONN_TCP,
    RTSP_CONN_UDP,
    RTSP_CONN_HTTP
};

typedef NS_ENUM(int, RtspTransferCallbackCodes) {
    RT_SOURCE_OPENING,
    RT_SOURCE_OPENED,
    RT_SOURCE_CLOSING,
    RT_SOURCE_CLOSED,
    RT_SOURCE_ERROR,
    RT_DEST_OPENING,
    RT_DEST_OPENED,
    RT_DEST_CLOSING,
    RT_DEST_CLOSED,
    RT_DEST_ERROR
};

@class RtspTransfer;

@protocol RtspTransferCallback <NSObject>
- (int) RtspTransferStatus: (RtspTransfer*) who Code: (int) arg;
@end

@interface RtspTransfer : NSObject
-(id) init;
-(int) OpenRtsp: (NSString*) rtsp_url toRtmp: (NSString*) rtmp_url callback: (id<RtspTransferCallback>) cbk;
-(int) Close;
-(int) Start;
-(int) Stop;
-(bool) isStarted;
-(int) setQueueLength:(unsigned int) length;
-(unsigned int) getQueueLength;
-(void) setRtspConnectionType: (RtspConnectionType) type;
-(void) setRtspAnalyzeDurationMsec: (long long) msec;
-(NSString*) getLastError;

@end
