# VXG Mobile SDK iOS

### MobileSDK 2.0.129.240816

CloudSDK
Version 2.0.129_20240816:
- updated versions of used SDK: 
  PlayerSDK: 2.0.20240816
- added the ability to select the recording container type
- added new settings for recording container type
- fixed a possible issue with live stream stopping after the camera became active
- added new setting: workaroundWaitUntilLiveStreamCompletelyReady

PlayerSDK
Version 2.0.20240816:
- added the ability to select the recording container type
- added new settings for recording container type

EncoderSDK
Version 2.0.20240531:

### MobileSDK 2.0.128.240606

CloudSDK
Version 2.0.128_20240606:
- updated versions of used SDK: 
  PlayerSDK: 2.0.20240606
- fixed PTZ api issues
- added audiosession state check functionality
- added new callbacks: OnAudioSessionStateDidChange
- added new method: isAudioSessionActive

PlayerSDK
Version 2.0.20240606:
- added audiosession status check functionality
- added optional callback to monitor current position of playing stream
- added new callbacks: OnAudioSessionStateDidChange, OnStreamPositionDidChange
- added new method: isAudioSessionActive

EncoderSDK
Version 2.0.20240531:

### MobileSDK 2.0.127.240531

CloudSDK
Version 2.0.127_20240531:
- updated versions of used SDK: 
  EncoderSDK: 2.0.20240531
- improved setRange functionality
- added the ability to monitor the current position when playing a stream.
- added new setting for enable monitoring current position:
  *PlaybackPositionMonitorType
- added optional callback for monitoring current position:
  OnPlaybackPositionChanged


PlayerSDK
Version 2.0.20240503:

EncoderSDK
Version 2.0.20240531:
- added new setting: *AudioInputMute

### MobileSDK 2.0.126.240507

CloudSDK
Version 2.0.126_20240507:
- added offset emulation for getTimeline API
- added delete storage data API support
- added order_by support for getTimeline API
- added new API support: getRecords*, deleteRecords*
- fixed delete, post and put query issues

PlayerSDK
Version 2.0.20240503:
- updated license list for Almatel

EncoderSDK
Version 2.0.20240503:
- updated license list for Almatel

### MobileSDK 2.0.125.240503

CloudSDK
Version 2.0.125_20240503:
- updated versions of used SDK: 
  PlayerSDK: 2.0.20240503
  EncoderSDK: 2.0.20240503

PlayerSDK
Version 2.0.20240503:
- updated license list for Almatel

EncoderSDK
Version 2.0.20240503:
- updated license list for Almatel

### MobileSDK 2.0.124.240411

CloudSDK
Version 2.0.124_20240411:
- updated versions of used SDK: 
  EncoderSDK: 2.0.20240411

PlayerSDK
Version 2.0.20240321:

EncoderSDK
Version 2.0.20240411:
- added the ability to apply various filters to input audio data


### MobileSDK 2.0.123.240326

CloudSDK
Version 2.0.123_20240326:
- fixed rare issue with invalidate URL session

PlayerSDK
Version 2.0.20240321:

EncoderSDK
Version 2.0.20240319:

### MobileSDK 2.0.122.240324

CloudSDK
Version 2.0.122_20240324:
- fixed possible URL session invalidate issue

PlayerSDK
Version 2.0.20240321:

EncoderSDK
Version 2.0.20240319:

### MobileSDK 2.0.121.240324

CloudSDK
Version 2.0.121_20240324:
- optimized the number of URL sessions used
- added support for 500 internal server error

PlayerSDK
Version 2.0.20240321:

EncoderSDK
Version 2.0.20240319:

### MobileSDK 2.0.120.240321

CloudSDK
Version 2.0.120_20240321:
- updated versions of used SDK: 
  PlayerSDK: 2.0.20240321

PlayerSDK
Version 2.0.20240321:
- fixed possible UI thread checker issue
- fixed possible crash on close

EncoderSDK
Version 2.0.20240319:

### MobileSDK 2.0.119.240319

CloudSDK
Version 2.0.119_20240319:
- updated versions of used SDK: 
  PlayerSDK: 2.0.20240319
  EncoderSDK: 2.0.20240319

PlayerSDK
Version 2.0.20240319:
- fixed memory leaks in audio decoder and content provider

EncoderSDK
Version 2.0.20240319:
- fixed memory leaks in capture
- fixed possible crash on close

### MobileSDK 2.0.118.240307

CloudSDK
Version 2.0.118_20240307:
- updated versions of used SDK: 
  EncoderSDK: 2.0.20240307

PlayerSDK
Version 2.0.20240122:

EncoderSDK
Version 2.0.20240307:
- fixed possible freezes during the application lifecycle
- added new advanced settings:
  internalDidEnterBackgroundHandling
  internalWillResignActiveHandling
  internalWillEnterForegroundHandling
  internalDidBecomeActiveHandling
  internalWillTerminateHandling

### MobileSDK 2.0.117.240122

CloudSDK
Version 2.0.117_20240122:
- updated versions of used SDK: 
  PlayerSDK: 2.0.20240122

PlayerSDK
Version 2.0.20240122:
- improved thumbnailer speed
- improved audio / video synchronization
- fixed low speed issue on some streams

EncoderSDK
Version 2.0.20231019:

### MobileSDK 2.0.116.231222

CloudSDK
Version 2.0.116_20231222:
- corrected getEventTypes method name

PlayerSDK
Version 2.0.20231221:

EncoderSDK
Version 2.0.20231019:

### MobileSDK 2.0.115.231221

CloudSDK
Version 2.0.115_20231221:
- updated versions of used SDK: 
  PlayerSDK: 2.0.20231221
- fixed existing getActivty and getCalendar methods to match the latest VXG API changes.
- added new parameters for getActivty and getCalendar methods
- added new parameters for getTimeline method
- added new methods: getTimelineV4, getEventsTypes, getEventsTypesV4

PlayerSDK
Version 2.0.20231221:

EncoderSDK
Version 2.0.20231019:

### MobileSDK 2.0.114.231130

CloudSDK
Version 2.0.114_20231130:
- updated versions of used SDK: 
  PlayerSDK: 2.0.20231129
- greatly improved memory consumption and cpu utilization
- added new renderer type
- added framerate control
- added buffer size and type configuration for video and audio renderer
- fixed getVideoShot functionality
- the default video renderer is now Metal based
- added a lot of new settings:
  dataReceiveTimeout,
  videoKeyframeOnly,
  synchroNeedDropVideoFrames,
  advancedConnectionNetworkProtocolBufferSize,
  advancedConnectionNetworkProtocolPacketSize,
  advancedSourceAsyncGetPacket,
  advancedVideoRendererPreferredFpsNum,
  advancedVideoRendererPreferredFpsDen,
  internalPlayerMode,
  internalVideoDecoderOutputPictureFormat,
  internalVideoRendererType,
  internalVideoRendererDrawLastFrame,
  internalVideoRendererDisplayMethodType,
  internalVideoRendererDisplayLinkPreferredMinFps,
  internalVideoRendererDisplayLinkPreferredMaxFps,
  internalVideoRendererDisplayAnimation,
  internalBufferSourceVideodecoderType,
  internalBufferSourceVideodecoderSize,
  internalBufferVideodecoderVideorendererType,
  internalBufferVideodecoderVideorendererSize,
  internalBufferSourceAudiodecoderType,
  internalBufferSourceAudiodecoderSize,
  internalBufferAudiodecoderAudiorendererType,
  internalBufferAudiodecoderAudiorendererSize

PlayerSDK
Version 2.0.20231129:
- greatly improved memory consumption and cpu utilization
- deeply refactored video render functionality
- deeply refactored video decoder functionality
- added new renderer type
- added framerate control
- added buffer size and type configuration for video and audio renderer
- fixed player mode functionality for playback pipeline configuration
- fixed getVideoShot functionality
- the default video renderer is now Metal based
- added a lot of new settings:
  internalVideoRendererType,
  internalVideoRendererDrawLastFrame,
  internalVideoDecoderOutputPictureFormat
  internalVideoRendererDisplayMethodType
  internalVideoRendererDisplayLinkPreferredMaxFps
  internalVideoRendererDisplayAnimation
  advancedVideoRendererPreferredFpsNum
  advancedVideoRendererPreferredFpsDen

EncoderSDK
Version 2.0.20231019:

### MobileSDK 2.0.113.231102

CloudSDK
Version 2.0.113_20231102:
- updated versions of used SDK: 
  PlayerSDK: 2.0.20231102
- fixed ffrate functionality
- added new advanced config setting for configure open mode:
  advancedOpenMode

PlayerSDK
Version 2.0.20231102:
- added ffrate setting when starting playback
- added new advanced config setting for configure open mode:
  advancedOpenMode

EncoderSDK
Version 2.0.20231019:

### MobileSDK 2.0.112.231019

CloudSDK
Version 2.0.112_20231019:
- updated versions of used SDK: 
  PlayerSDK: 2.0.20231019
  EncoderSDK: 2.0.20231019

PlayerSDK
Version 2.0.20231019:
- fixed possible double notification when starting recording

EncoderSDK
Version 2.0.20231019:

### MobileSDK 2.0.111.231011

CloudSDK
Version 2.0.111_20231011:
- updated versions of used SDK: 
  PlayerSDK: 2.0.20231011

PlayerSDK
Version 2.0.20231011:
- fixed memory leak in the HW decoder implementation

EncoderSDK
Version 2.0.20231006:

### MobileSDK 2.0.110.231006

CloudSDK
Version 2.0.110_20231006:
- updated versions of used SDK: 
  PlayerSDK: 2.0.20231004
  EncoderSDK: 2.0.20231006

PlayerSDK
Version 2.0.20231004:
- migrated on the ffmpeg based VPS/SPS/PPS parsing
- fixed possible crashes on some broken streams

EncoderSDK
Version 2.0.20231006:
- refactored close functionality
- improved closing speed

### MobileSDK 2.0.109.230921

CloudSDK
Version 2.0.109_20230921:
- fixed wait upload records functionality for playback
- fixed syncronization issues for setPosition

PlayerSDK
Version 2.0.20230908:

EncoderSDK
Version 2.0.20230908:

### MobileSDK 2.0.108.230908

CloudSDK
Version 2.0.108_20230908:
- updated versions of used SDK: 
  PlayerSDK: 2.0.20230908
  EncoderSDK: 2.0.20230908

PlayerSDK
Version 2.0.20230908:
- improved hwaccel support in ffmpeg decoder

EncoderSDK
Version 2.0.20230908:

FFMPEG:
Version 6.0.0:
- added mediacodec support
- fixed mediacodec dynamic change format issue

### MobileSDK 2.0.107.230907

CloudSDK
Version 2.0.107_20230907:
- updated versions of used SDK: 
  PlayerSDK: 2.0.20230907
- added possiblity reconnect on the video output format changed notify
- added new advanced config settings:
  reconnectOnVideoOutputFormatChanged
  workaroundRemoveBackwardDiscontinuityForGetData
- target iOS SDK now 11.0  

PlayerSDK
Version 2.0.20230907:
- added support for dynamic change of video stream resolution
- added support for restarting pts video and audio streams
- added notify VDP_OUTPUT_FORMAT_CHANGED
- added new advanced config settings for restarting pts functionality:
  workaroundRemoveBackwardDiscontinuityForGetData
- added HWACCEL decoding support

EncoderSDK
Version 2.0.20230629:

### MobileSDK 2.0.106.230629

 CloudSDK
Version 2.0.106_20230629:
- updated versions of used SDK: 
  PlayerSDK: 2.0.20230629,
  EncoderSDK: 2.0.20230629

 PlayerSDK
Version 2.0.20230629:
- fixed problems related to migration to FFMPEG version 6.0.0

 EncoderSDK
Version 2.0.20230629:
- fixed input sample rate issue

### MobileSDK 2.0.105.230623

 CloudSDK
Version 2.0.105_20230623:
- updated versions of used SDK: 
  PlayerSDK: 2.0.20230623,
  EncoderSDK: 2.0.20230623
- fixed rare issues with opening after calling the сlose method
- fixed possible memory leaks and crashes

 PlayerSDK
Version 2.0.20230623:
- improved AVAudioSession data handler

 EncoderSDK
Version 2.0.20230623:
- fixed thread issue with AVCaptureSession

### MobileSDK 2.0.104.230609

 CloudSDK
Version 2.0.104_20230609:
- updated versions of used SDK: 
  EncoderSDK: 2.0.20230609
- improved live and backward url request logic
- added new config setting for backward url type:
  *BackwardUrlType

 PlayerSDK
Version 2.0.20230606:

 EncoderSDK
Version 2.0.20230609:
- fixed audio issues after migrating to FFMPEG version 6.0.0

### MobileSDK 2.0.103.230606

 CloudSDK
Version 2.0.103_20230606:
- updated versions of used SDK: 
  PlayerSDK: 2.0.20230606,
  EncoderSDK: 2.0.20230606
- added asynchrony for methods setSource, setPosition and Play
- improved getPosition method accuracy
- improved data IO error handling
- added new advanced config settings for new features:
  *InternalWillResignActiveMode,
  *WorkaroundRemoveBackwardJumpsForGetPosition,
  *AdvancedSourcePtsModifyMode,
  *AdvancedOptionReconnectDelayStep

 PlayerSDK
Version 2.0.20230606:
- improved getaddrinfo async version on the ffmpeg level
- added http reconnect delay step setting on the ffmpeg level
- removed jumps back for get stream and renderer position methods after changing position
- corrected data flush after successful position change
- improved data IO error handling
- added new advanced config settings for new features:
  advancedSourcePtsModifyMode
  advancedSourceOptionHttpReconnectDelayStep
  workaroundRemoveBackwardJumpsForGetPosition

 EncoderSDK
Version 2.0.20230606:

### MobileSDK 2.0.102.230505

 CloudSDK
Version 2.0.102_20230505:
- updated versions of used SDK: 
  PlayerSDK: 2.0.20230505,
  EncoderSDK: 2.0.20230505
- added new method setSource with the ability to set a live url 
- improved live stream opening speed
- added new advanced config settings for tune low latency and fast detection stream functionality:
  *AdvancedOptionInitWithFastStreamDetection, 
  *AdvancedOptionInitWithLowLatency, 
  *AdvancedOptionTcpNoDelay,
  *AdvancedOptionAnalyzeDuration, 
  *AdvancedOptionHlsReloadPlaylistInterval
- added new advanced config settings for auto reconnect after data io error occurred:
  *EnableReconnectOnErrorDataIO
- fixed isMute method
- removed setVolume and getVolume methods
- fixed quality of service thread issues
- fixed double play issue
- fixed log levels problems

 PlayerSDK
Version 2.0.20230505:
- migrated to FFMPEG version 6.0.0
- added new low latency functionality
- improved stream fast detection functionality
- added new data IO error support:
  CP_ERROR_DATA_IO
- added new advanced config settings for tune low latency and fast detection stream functionality:
  advancedSourceOptionTcpNoDelay, 
  advancedSourceOptionAnalyzeDuration, 
  advancedSourceOptionHlsReloadPlaylistInterval,
  advancedSourceInitWithFastStreamDetection, 
  advancedSourceInitWithLowLatency.
- fixed possible crash on close
- fixed quality of service thread issues

 EncoderSDK
Version 2.0.20230505:
- migrated to FFMPEG version 6.0.0
- fixed quality of service thread issues

### MobileSDK 2.0.101.230320

 CloudSDK
Version 2.0.101_20230320:
- updated versions of used SDK: 
  PlayerSDK: 2.0.20230320,
  EncoderSDK: 2.0.20230320

 PlayerSDK
Version 2.0.20230320:
- updated license list

 EncoderSDK
Version 2.0.20230320:
- updated license list

### MobileSDK 2.0.100.230307

 CloudSDK
Version 2.0.100_20230307:
- updated versions of used SDK: 
  PlayerSDK: 2.0.20230307,
  EncoderSDK: 2.0.20230307

 PlayerSDK
Version 2.0.20230307:
- fixed digest auth for ffmpeg rtsp send command

 EncoderSDK
Version 2.0.20230307:
- fixed digest auth for ffmpeg rtsp send command

### MobileSDK 2.0.99.221128

 CloudSDK
Version 2.0.99_20221128:
- updated versions of used SDK: 
  PlayerSDK: 2.0.20221128,
  EncoderSDK: 2.0.20221128

 PlayerSDK
Version 2.0.20221128:
- fixed video renderer in one frame mode
- updated license list

 EncoderSDK
Version 2.0.20221128:
- updated license list

### MobileSDK 2.0.98.221103

 CloudSDK
Version 2.0.98_20221103:
- updated versions of used SDK: 
  PlayerSDK: 2.0.20221103,
- added new methods: getRecords, getTimelineThumbnails full, getClips with order by parameter
- added first version of memory card API support
- fixed default getClips method for support latest API changes
- fixed possible stucks on the sync methods
- a lot formatting

 PlayerSDK
Version 2.0.20221103:
- fixed possible new xcode warning 

 EncoderSDK
Version 2.0.20221020:

### MobileSDK 2.0.97.221020

 CloudSDK
Version 2.0.97_20221020:
- updated versions of used SDK: 
  PlayerSDK: 2.0.20221020,
  EncoderSDK: 2.0.20221020
- removed deprecated platforms: armv7, armv7s, i386

 PlayerSDK
Version 2.0.20221020:
- removed deprecated platforms: armv7, armv7s, i386

 EncoderSDK
Version 2.0.20221020:
- removed deprecated platforms: armv7, armv7s, i386

### MobileSDK 2.0.96.221005

 CloudSDK
Version 2.0.96_20221005:
- updated versions of used SDK: 
  PlayerSDK: 2.0.20221005,
  EncoderSDK: 2.0.20221005

 PlayerSDK
Version 2.0.20221005:
- updated license list

 EncoderSDK
Version 2.0.20221005:
- updated license list

### MobileSDK 2.0.95.220928

 CloudSDK
Version 2.0.95_20220928:
- fixed issues with CloudAPI commands related to 
  12 hour time format

 PlayerSDK
Version 2.0.20220831:

 EncoderSDK
Version 2.0.20220831:

### MobileSDK 2.0.94.220831

 CloudSDK
Version 2.0.94_20220831:
- added support for PlayerSDK new advanced config settings
- updated versions of used SDK: 
  PlayerSDK: 2.0.20220831,
  EncoderSDK: 2.0.20220831

 PlayerSDK
Version 2.0.20220831:
- added new advanced config settings:
  probesize, fpsprobesize, formatprobesize, max_probe_packets, live_start_index, rtmp_buffer, rtmp_live
- updated license list

 EncoderSDK
Version 2.0.20220831:
- updated license list

### MobileSDK 2.0.93.220812

 CloudSDK
Version 2.0.93_20220812:
- added support for get/set position when playing url (local playback)

 PlayerSDK
Version 2.0.20220707:

 EncoderSDK
Version 2.0.20220707:

### MobileSDK 2.0.92.220707

 CloudSDK
Version 2.0.92_20220707:
- updated versions of used SDK: 
  PlayerSDK: 2.0.20220707,
  EncoderSDK: 2.0.20220707

 PlayerSDK
Version 2.0.20220707:
- switched to openssl version 1.1.1q
- bump version to 2.0.20220707

 EncoderSDK
Version 2.0.20220707:
- switched to openssl version 1.1.1q
- bump version to 2.0.20220707

### MobileSDK 2.0.91.220705

 CloudSDK
Version 2.0.91_20220705:
- updated versions of used SDK: 
  PlayerSDK: 2.0.20220705,
  EncoderSDK: 2.0.20220705

 PlayerSDK
Version 2.0.20220705:
- migrated openssl to version 1.1.1p
- migrated to FFMPEG version 4.4.2

 EncoderSDK
Version 2.0.20220705:
- migrated openssl to version 1.1.1p
- migrated to FFMPEG version 4.4.2

### MobileSDK 2.0.90.220627

 CloudSDK
Version 2.0.90_20220627:
- fixed possible issues with uninterruptible CloudAPI synchronous commands

 PlayerSDK
Version 2.0.20220621:

 EncoderSDK
Version 2.0.20220317:

### MobileSDK 2.0.89.220621

 CloudSDK
Version 2.0.89_20220621:
- updated versions of used SDK: 
  PlayerSDK: 2.0.20220621
- added new setting for configure internal player gestures support

 PlayerSDK
Version 2.0.20220621:
- added support double tap gesture for all aspect ratio zoom/move modes
- added advanced config for double tap sequence behavour
- fixed video flickering issue with vertical pan gesture

 EncoderSDK
Version 2.0.20220317:

### MobileSDK 2.0.88.220317

 CloudSDK
Version 2.0.88_20220317:
- updated versions of used SDK: 
  PlayerSDK: 2.0.20220317,
  EncoderSDK: 2.0.20220317

 PlayerSDK
Version 2.0.20220317:
- migrated to OpenSSL version 1.1.1n with fixed latest critical CVE
- fixed HLS support for ffmpeg 4.4.1
- fixed audio session deactivation when enableInternalAudioSessionConfigure is off

 EncoderSDK
Version 2.0.20220317:
- migrated to OpenSSL version 1.1.1n with fixed latest critical CVE

### MobileSDK 2.0.87.220310

 CloudSDK
Version 2.0.87_20220310:
- Fixed problems with playing records in the selected range

 PlayerSDK
Version 2.0.20220211:

 EncoderSDK
Version 2.0.20220110:

### MobileSDK 2.0.86.220306

 CloudSDK
Version 2.0.86_20220306:
- Fixed problem with Swift bridging for getTimeline method

 PlayerSDK
Version 2.0.20220211:

 EncoderSDK
Version 2.0.20220110:

### MobileSDK 2.0.85.220223

 CloudSDK
Version 2.0.85_20220223:
- Fixed a lot of potential retain cycles

 PlayerSDK
Version 2.0.20220211:

 EncoderSDK
Version 2.0.20220110:

### MobileSDK 2.0.84.220222

 CloudSDK
Version 2.0.84_20220222:
- fixed retain cycle issue in CloudPlayerSDK

 PlayerSDK
Version 2.0.20220211:
- added onAudioRendererFrameAvailable callback

 EncoderSDK
Version 2.0.20220110:

### MobileSDK 2.0.83.220215

 CloudSDK
Version 2.0.83_20220215:
- added local record API for cloud streams

 PlayerSDK
Version 2.0.20220211:
- added onAudioRendererFrameAvailable callback

 EncoderSDK
Version 2.0.20220110:

### MobileSDK 2.0.82.220204

 CloudSDK
Version 2.0.82_20220204:
- added new Refresh Token API
- added new advanced settings: 
  reconnect on http error for hls sources.
  default value: 404

 PlayerSDK
Version 2.0.20220112:
- fixed the problem with passing 64-bit pointers to ffmpeg by dictionary
- fixed AAC ASC gegenrated config from stream info
- added configuration setting for generate ASC. Default: 0
- added new advanced settings: reconnect on http error. Default: 404

 EncoderSDK
Version 2.0.20220110:

### MobileSDK 2.0.80.211118

 CloudSDK
Version 2.0.80_20211118
- added M1 support
- added protocol and port various configs for Cloud API in next components:
  CloudPlayerSDK, ScrubberView, ScrubberTimelineView, CalendarView
- added protocol and port various settings for Cloud API, Camera API and Streaming publish in ClousSreamerSDK
- added rtmps support in CloudStreamer
- updated versions of used SDK on latest with FFMPEG 4.4.1 and OpenSSL 1.1.1l support
- updated and cleaned samples

 PlayerSDK
Version 2.0.20211118
- migrated to FFMPEG version 4.4.1
- migrated to OpenSSL version 1.1.1l and used as a shared framework
- added M1 support
- added xcframeworks build support
- added bitcode build support

 EncoderSDK
Version 2.0.20211118
- migrated to FFMPEG version 4.4.1
- migrated to OpenSSL version 1.1.1l and used as a shared framework
- added M1 support
- added xcframeworks build support
- added bitcode build support

### MobileSDK 2.0.76.210906

 PlayerSDK
- Added time shift functionality
- Added ONVIF API for device discovery, based on VXG ONVIF library 
- Builded with latest OpenSSL
- Fixed redraw video frame in pasued mode
- Used extradata analyzer for dectect video width and height when default detection failed before
- Added possibility get stream info from extradata, if detection failed before. 
- Fixed Video IPB streams processing with HW Video decoder 
- FFMPEG: fixed h264_mp4toannexb filter for frame with undefined NALU
- Added h264_metadata for crop
- Added API for setup internal buffers sizes
- Added internal buffers type config: 0 - default, 1 - based on mmap
- Added new config settings: 
    advancedSourceUseAsyncGetAddrInfo
    advancedDecoderVideoHardwareReadyFrameQueueMin
    advancedDecoderVideoHardwareReadyFrameQueueMax
- Added settings for HW Video decoder ready frame queue size
- Added support for streams where the audio stream stops but not on the End Of Stream
- Fixed End Of Stream detection algorithm with incomplete audio stream
- Fixed SW Video decoder configuration for MPEG2 type
- Fixed SW Video decoder crash on YUV P10 formats
- Fixed possible crash for broken streams
- Added get version support

 EncoderSDK
- Method setAudioSamplingRate is now public

 CloudSDK
- Added ScrubberView control
- Added SrcubberTimelineView control
- Added first version of PTZ control
- CalendarView: added a lot of new UI settings
- CalendarView: added events filter support
- CalendarView: added new syle
- TimelineView: added Live button for timeline
- TimelineView: added a few new UI customizations
- CloudStreamer: Added  callback for getting SID / PASSWORD for reconnection use case 
- Added new API commands:
    getBackwardUrl
    triggerEvent
    getActivity
    createClip / getClip / deleteClip
    getEvent
    getCameraAudio
    getRecords
    getTimelineThumbnailsFull
    etc.
- Added CloudPlayerSDK new config settings:
    Fast Forward rate  
    Live URL type  
    Audio Echo cancellation
    Video Decoder type
    Microphone Audio average levels
    etc.
- Corrected error handling in CloudSDK
- Fixed library double load issues
- Added scale independent configs
- Added get version support for all components
- Updated SDK dependencies to the latest versions
  
### MobileSDK 2.0.46.200901

 PlayerSDK (r4739)
- Fixed search paths for MediaPlayerSDKTest.swift sample

### MobileSDK iOS.2.0.47.201002

 PlayerSDK (r4761)
- Improved stream info detection for some streams
- Improved IPB streams support
- Fixed drawing issues for orientation chanegs in pasued state

### MobileSDK 2.0.46.200901

 PlayerSDK (r4739)
- Fixed search paths for MediaPlayerSDKTest.swift sample

### MobileSDK 2.0.45.200714

 PlayerSDK (r4739)
- Added PauseWithBuffering functionality
- Fixed problem with freezing rtmp pause in case of loss of connection
- Fixed issue due to which the frame was not updated when the orientation was changed and the current state is suspended
- Added new callback for detect video aspects changing
- Added new audio renderer based on AudioUnit 
- Added echo cancellation support
- Corrected aspect ratio calculation method
- Added average level for microphone output if AudioUnit used
- Added new notify VIDEO_STREAMINFO_NOT_COMPLETE
- Added first version of closed cations support
- Fixed memory leak

### MobileSDK 2.0.44.200619

 EncoderSDK (r4743)
- Same as Player work with license file
- Added external audio source 
- Added a few advanced settings
- Added config settings for enable/disable automatically audio session configure
- Fixed a memmory leak in some cases
- Add ability to configure AAC-encoder bitrate and samplerate

### MobileSDK 2.0.43.200324

 PlayerSDK (r4722)
- Added Audio Specific Config(ASC) for AAC streams without it
- Added WebRTC improvements

### MobileSDK 2.0.42.200311

 PlayerSDK (r4716)
- Fixed problems with some streams on iPhone XR
- Fixed problem with incorrect image colors produced by take shot 
  functionality in software decoding mode 
- Examples are slightly corrected

### MobileSDK 2.0.41.200120

 PlayerSDK (r4711)
- Fixed issue with OpenGL ver 2 support on old devices(9.0)
- Lowres/bogomips tuning for SW decoder
- Fixed memory leak in HW decoder
- Added new zoom modes and double tap handler for zoom mode 4201
- Audio manager changed for more clear close
- Restore saved parametres after MediaPlayer closed
- Added new settings for voice processing (used in backward channel)

### MobileSDK 2.0.40.191203

 PlayerSDK (r4700)
- Added new zoom modes
- Added the ability to disable recording support at start
- Added OpenGLES v3 support for SW renderer
- Added MIN and MAX zoom percent settings
- Added fix for UI main thread checker issue which cause a delay on start
- Fixed issue with OpenGLES v2 only devices
- Fixed iOS 13 compatibility issues

### MobileSDK 2.0.39.190917

 EncoderSDK (r4678)
Enchanced logs at trace-mode

 PlayerSDK
Fixed rtmps-streaming

### MobileSDK 2.0.38.190813

 EncoderSDK (r4632)
- Fix fall in case changing resolution too fast
- Fix rtsp-streamer
- AudioData-callback enchanced by peak-value
- Show SDK version and build time at init

 PlayerSDK (r4645)
- Added support for work in background (as audio player)
- Fixed crash with GetUserName in rtsplib on iOS emulator
- Audio session now more cofigurable
- Fixed play/pause in background mode
- Added check for interruption on mediaformat_find_stream_info stage 
- Redesigned some samples and added remote control support
- Fixed 64-bit issue in playlist parser
- Fixed metal shader comilation on ios 13
- Memory leak fixed in sample
- Fixed MediaPlayer restart in background mode 
- Added reconnect background test code to samples
- Fixed orientation issue for some rare conditions

 CloudSDK (r260)
- Improved CloudSDKPlayerView
- Added CloudMultiPlayerSDKView first version 
- Fixed timeline style for CloudPlayerSDKView
- Added handle tap event for CloudPlayerSDKView 
- Added scale for texts according control size
- Added config for timeline control 
- Added styles for CloudPlayerSDKView control
- Fixed setSource with position timeline scroll 
- Fixed scroll to left in timeline 
- Added camera timezone for timeline 
- Added various settings for timeline
- Fixed a lot of memory leaks in frameworks 

### MobileSDK 2.0.37.190607

 EncoderSDK (r4610)
- Fix RTSP-server stream SIGPIPE-signal error

### MobileSDK 2.0.36.190326

 PlayerSDK (r4556)
- Fixed rtsplib content provider close

### MobileSDK 2.0.35.190325

 EncoderSDK (r4437)
- AdditionalInfo-callback for MuxerRec - for information about file recording
- Fix picture-quality while streaming to prevent pictore destroy
- Faster stream-stop
- Use default AudioSession for capturing audio

 PlayerSDK (r4526)
- Dynamic audio rotation for egl-render
- Implemented setting enableInternalAudioSessionConfigure, configure or use default audio-routes
- Issues while recording at file are fixed
- Moved to openssl 1.1.1a for playing WebRTC over https
- Added draw-object over video functionality
- Ffmpeg-framework recompiled with use openssl 1.1.1a-library

 CloudSDK (r240)
- SetRange-mode implemented (for play short parts of timeline as clip);
- CloudPlayerSDKView implemented, for more usability. Timeline/controls/calendar are configurable options;
- Additional ability with Cloud: upload/download/delete images/videosegments/events;
- Additional calbacks: CloudPlayer: sourceChanged, sourceUnreachable, sourceOffline; CloudPlayerSDKView: OnConnected, onError, OnTrial;
- Faster reconnect CloudStreamer in case connection lost

### MobileSDK 2.0.34.181225

 EncoderSDK (r4395)
- Expanded address entry restrictions for rtmp stream upto rtmpe:// rtmps://

### MobileSDK 2.0.33.181206

 EncoderSDK (r4379)
- Adding setting setRtspAnalyzeDuration for more reactive (re-)connections

### MobileSDK 2.0.32.181204

 PlayerSDK:
- Video rotation fixed (r4366)
- Fixed race condition between Open and Close (r4364)
- Decreased memory usage (especially for 4k video) (r4363)
- Added check for 4k HW decoder support. Fixed Metal video renderer (r4360)
- Fixed HW decoder close session hang on iOS ver >= 11 (r4359)

### MobileSDK 2.0.31.181202

 EncoderSDK (r4365)
- More polite closing of RtspTransfer

### MobileSDK 2.0.30.181127

 EncoderSDK (r4362)
- Changing the state and callbacks of RtspTransfer
- Fix MediaCaptureSDK_Test to reconnect the RtspTransfer instance if an error occurred

### MobileSDK 2.0.29.181112

 EncoderSDK(r4353)
- Prevented permission request for camera if nopreview or VIDEO_FORMAT_NONE configured, and for microphone if AUDIO_FORMAT_NONE configured

### MobileSDK 2.0.28.181106

 EncoderSDK(r4348)
- Update example MediaCaptureSDK_test for RtspTransfer callbacks
- Prevent SIGBART error for ios simulator at MuteMicrophone (Encoder doesn't work for iosSimulator because there isn't camera/microphone simulation, but shouldn't fall)

### MobileSDK 2.0.27.181102

 PlayerSDK (r4342)
- Posibility to check/prevent load ffmpeg-library (isMediaLibraryInited/setMediaLibraryInited)

 EncoderSDK(r4339)
- Posibility to check/prevent load ffmpeg-library by variable VXG_CaptureSDK_ffmpeg_inited
- RtspTransfer callbacks implemented
- Additional example PlayerAndRtspTransfer implemented for demonstrate calbacks&preventing loading ffmpeg-funcs
- MuteMicrophone function implemented

### MobileSDK 2.0.26.181026

 PlayerSDK (r4331)
- Fix high-CPU load 

 EncoderSDK(r4330)
- RtspTransfer add setting RTSPConnection to main Api


### MobileSDK 2.0.25.181025

 PlayerSDK (r4329)
- Update xamarin-examples for the latest MediaPlayerSDK(r4317)

### MobileSDK 2.0.24.181024

 EncoderSDK(r4233)
- Implemented rtsp->rtmp transfer as single class
- Fixed file recording & trimming
- Fixed audio timestamps calculating

### MobileSDK 2.0.23.181018

 PlayerSDK (r4317)
- Added Metal graphic API support
- Fixed Main Thread Checker issues
- Fixed issue with wrong protocol sequence for ffmpeg source

### MobileSDK 2.0.22.180924

 PlayerSDK (r4275)
- Added OpenGL ES 3.0 support

### MobileSDK 2.0.21.180821

 PlayerSDK (r4247)
- Fixed issue with close on udp streams

### MobileSDK 2.0.20.180629

 EncoderSDK (r4204)
- Implemented AUDIO_FORMAT_ALAW (G711@8000khz alaw)

### MobileSDK 2.0.19.180627

 EncoderSDK(r4202): 
- LogLevel renamed to VXG_CaptureSDK_LogLevel
- Reenabled AUDIO_FORMAT_ULAW (G711@8000khz)

### MobileSDK 2.0.18.180622

 PlayerSDK
- add xamarin-example MediaPlayerSDKTest.xamarin.static using static version of MediaPlayerSDK

### MobileSDK 2.0.18.180618

 EncoderSDK(r4193)
- add example MediaCaptureSDK_Test.swift

 PlayerSDK (r4192)
- removing duplicate symbols with rfc_md5

 CloudSDK
- compiled with new MediaPlayer-version 

### MobileSDK 2.0.17.180613

 EncoderSDK(r4191)
- add example PlayerAndStreamer_test for demonstrate ability create application-projet with both MediaCaptureSDK and MediaPlayerSDK

 PlayerSDK (r4190)
- update Xamarin-example for new headers if MediaPlayerSDK

 CloudSDK (r163)
- VXG.StreamLand renamed to VXG.CloudSDK
- Compiled with new MediaPlayer-version 

### MobileSDK 2.0.16.180612

 PlayerSDK (r4189)
- fixed possible duplicated symbols with VXG.MediaEncoder.iOS SDK;

### MobileSDK 2.0.16.180607

 PlayerSDK (r4188)
- fixed scale for SW decoder if resolution same; added scale for HW getVideoShot; enable video renderer callback again;

### MobileSDK 2.0.16.180510

 CloudSDK (r155)
- fixed issues with protocol data exchange. Decreased network traffic. Disabled a lot of unnecesarry trace-messages.

### MobileSDK 2.0.15.180508

 PlayerSDK (r4161)
- fix crash on corrupted license-key; disable videoRenderFrameAvailable-callback;

 CloudSDK (r154)
- Compiled with new MediaPlayer-version

### MobileSDK 2.0.14.180504

 EncoderSDK
- update example, implemented sample-functions for changing camera position & orientation 


### MobileSDK 2.0.13.180428

 CloudSDK (r152)
- additional error proccecing

 EncoderSDK (r4153)
- less cpu and mem-usage, increased perforance

### MobileSDK 2.0.12.180411

 CloudSDK (r150)
- Compiled with new MediaPlayer-version, streamland-player example ecnhanced by show how to get timeline segments on SOURCE_CHANGED callback-value

### MobileSDK 2.0.11.180410

 PlayerSDK (r4111)
- Added runtime set log level functionality
- Added keep-alive setting for http(s) sources

### MobileSDK 2.0.10.180328

 CloudSDK (r144)
- "How to use the license key.pdf" added
- Compiled with new MediaPlayer-version

 PlayerSDK (r4084): 
- latency control; 
- play segment functionality

 EncoderSDK (r4085)
- Front/back camera change

### MobileSDK 2.0.9.180313

 CloudSDK (r138)
- Add callback for error on setSource

 EncoderSDK (r3961) 
- Autocorrect wrong values for width height and pts;
- Force quiting after 10 seconds wait if something wrong;
- Fix camera configure for iPhoneX

 PlayerSDK (r4009)
- fix mem.leaks if used onVideoRendererFrameAvailable-callback

### MobileSDK 2.0.8.180213

 CloudSDK
- Modify xamarin example to use license system (config and file)

### MobileSDK 2.0.7.180208

 CloudSDK
- Fix update license system for MediaPlayerSDK
- Add static version of MediaPlayerSDK to package

### MobileSDK 2.0.6.180206

 CloudSDK
- Update license system, provides update outdated keys over internet

### MobileSDK 2.0.5.180129

 CloudSDK
- Fix bug in libcloudsdk.a while calling callback CONNECT_SUCCESSFUL
- Rewrited samples for Streamland, removed hardcoded acces_tokens 

### MobileSDK 2.0.4.180126

 CloudSDK
- Fix bad stream after stream restarting
- Remove unnecessary debug-messages while streaming

### MobileSDK 2.0.3.180124

 CloudSDK
- Package structure reformat
- CloudPlayerSDK with sample streamland-player implemented

### VXG.Cloud.SDK.iOS.2.0.2.180119

 CloudSDK
- Package structure reformat
- CloudSDK classes decreased to simple one: CloudPlayerSDK(TODO) and CloudStreamerSDK
- CloudStreamerSDK with sample streamland-streamer implemented


### VXG.Cloud.SDK.iOS.2.0.1.170919

 CloudSDK
- Added next snippets:
   Snippet.CloudCamera.ChangeSettings
   Snippet.CloudCameraList.AddDelete
   Snippet.CloudCameraList.PrintAll
   Snippet.CloudPlayer.CreateAndPlayCameraFromUrl
   Snippet.CloudPlayer.PlayKnownCameraID
   Snippet.CloudPlayer.PlayKnownCameraUrl
- Added sample: CloudPlayerTest
- CloudAPI extended with record and lat/long
- Fixed various issues in CloudPlayer, CloudCamera and CloudConnectection


### VXG.Cloud.SDK.iOS.2.0.0.170912

 CloudSDK
- Implemneted: CloudAPI, CloudConnection, CloudTrialConnection, CloudCameraList, partialy CloudPlayer
- Added snippets: Simple camera list, View live camera by id

