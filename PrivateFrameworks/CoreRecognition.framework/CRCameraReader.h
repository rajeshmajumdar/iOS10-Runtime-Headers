/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRecognition.framework/CoreRecognition
 */

@interface CRCameraReader : UIViewController <AVCaptureVideoDataOutputSampleBufferDelegate> {
    UIActivityIndicatorView * _activityIndicator;
    CRAlignmentLayer * _alignmentLayer;
    CRBoxLayer * _boxLayer;
    NSTimer * _boxLayerHideTimer;
    <CRCameraReaderDelegate> * _callbackDelegate;
    NSString * _cameraMode;
    int  _cameraPosition;
    NSPointerArray * _captureBuffer;
    unsigned int  _captureCount;
    BOOL  _captureMode;
    UIColor * _capturedTextColor;
    NSMutableDictionary * _cardNumberCounts;
    NSMutableDictionary * _cardholderCounts;
    BOOL  _codeInverted;
    NSDate * _codePresented;
    float  _configDemoSpeed;
    BOOL  _configExperimentalMode;
    BOOL  _configPresentCentered;
    BOOL  _configUseFastScanning;
    BOOL  _configUseJPEGForColor;
    BOOL  _continousMode;
    NSMutableArray * _dateCutRects;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    DiagnosticHUDLayer * _diagnosticHUDLayer;
    BOOL  _didSendEndOrCancel;
    BOOL  _didSendFindBox;
    NSMutableDictionary * _expirationDateCounts;
    int  _exposureMode;
    int  _focusMode;
    NSString * _foundCode;
    BOOL  _foundNumberEmbossed;
    BOOL  _foundNumberFixedSapphire;
    BOOL  _foundNumberFixedSlate;
    BOOL  _foundNumberFlatISO;
    BOOL  _foundNumberFreeform;
    BOOL  _foundNumberPortrait;
    BOOL  _foundNumberTextDetector;
    NSArray * _foundPoints;
    BOOL  _hidePlacementText;
    unsigned int  _imagesToCapture;
    struct opaqueCMSampleBuffer { } * _lastBuffer;
    NSDate * _lastFieldFoundDate;
    NSDate * _lastFoundNumberDate;
    NSDate * _lastSendFindBox;
    UIColor * _maskColor;
    UIColor * _maskOutlineColor;
    NSMutableArray * _nameCutRects;
    NSArray * _outputObjectTypes;
    NSMutableDictionary * _pinnedFoundInfo;
    UIColor * _placementTextColor;
    NSDate * _pointsFound;
    struct OpaqueVTPixelTransferSession { } * _previewScaleSession;
    BOOL  _previousIdleState;
    NSObject<OS_dispatch_semaphore> * _processingImage;
    NSObject<OS_dispatch_queue> * _processingQueue;
    CRCaptureSessionManager * _sessionManager;
    NSDate * _sessionStarted;
    double  _sessionTimeout;
    BOOL  _showDiagnosticHUD;
    UITapGestureRecognizer * _tapGestureRecognizer;
    int  _torchMode;
    int  _whiteBalanceMode;
}

@property (retain) UIActivityIndicatorView *activityIndicator;
@property (retain) CRAlignmentLayer *alignmentLayer;
@property (retain) CRBoxLayer *boxLayer;
@property (retain) NSTimer *boxLayerHideTimer;
@property <CRCameraReaderDelegate> *callbackDelegate;
@property (copy) NSString *cameraMode;
@property int cameraPosition;
@property (retain) NSPointerArray *captureBuffer;
@property unsigned int captureCount;
@property (getter=isCaptureMode) BOOL captureMode;
@property (nonatomic, copy) UIColor *capturedTextColor;
@property (retain) NSMutableDictionary *cardNumberCounts;
@property (retain) NSMutableDictionary *cardholderCounts;
@property BOOL codeInverted;
@property (retain) NSDate *codePresented;
@property float configDemoSpeed;
@property BOOL configExperimentalMode;
@property BOOL configPresentCentered;
@property BOOL configUseFastScanning;
@property BOOL configUseJPEGForColor;
@property BOOL continousMode;
@property (readonly) int currentCameraIdentifier;
@property (retain) NSMutableArray *dateCutRects;
@property (readonly, copy) NSString *debugDescription;
@property (retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (retain) DiagnosticHUDLayer *diagnosticHUDLayer;
@property BOOL didSendEndOrCancel;
@property BOOL didSendFindBox;
@property (retain) NSMutableDictionary *expirationDateCounts;
@property int exposureMode;
@property int focusMode;
@property (retain) NSString *foundCode;
@property BOOL foundNumberEmbossed;
@property BOOL foundNumberFixedSapphire;
@property BOOL foundNumberFixedSlate;
@property BOOL foundNumberFlatISO;
@property BOOL foundNumberFreeform;
@property BOOL foundNumberPortrait;
@property BOOL foundNumberTextDetector;
@property (retain) NSArray *foundPoints;
@property (readonly) unsigned int hash;
@property BOOL hidePlacementText;
@property unsigned int imagesToCapture;
@property struct opaqueCMSampleBuffer { }*lastBuffer;
@property (retain) NSDate *lastFieldFoundDate;
@property (retain) NSDate *lastFoundNumberDate;
@property (retain) NSDate *lastSendFindBox;
@property (nonatomic, copy) UIColor *maskColor;
@property (nonatomic, copy) UIColor *maskOutlineColor;
@property (retain) NSMutableArray *nameCutRects;
@property (copy) NSArray *outputObjectTypes;
@property (retain) NSMutableDictionary *pinnedFoundInfo;
@property (nonatomic, copy) UIColor *placementTextColor;
@property (retain) NSDate *pointsFound;
@property struct OpaqueVTPixelTransferSession { }*previewScaleSession;
@property BOOL previousIdleState;
@property (retain) NSObject<OS_dispatch_semaphore> *processingImage;
@property (retain) NSObject<OS_dispatch_queue> *processingQueue;
@property (retain) CRCaptureSessionManager *sessionManager;
@property (retain) NSDate *sessionStarted;
@property double sessionTimeout;
@property BOOL showDiagnosticHUD;
@property (readonly) Class superclass;
@property (retain) UITapGestureRecognizer *tapGestureRecognizer;
@property int torchMode;
@property int whiteBalanceMode;

+ (id)extractCardImage:(struct vImage_Buffer { void *x1; unsigned int x2; unsigned int x3; unsigned int x4; }*)arg1 fromPixelBuffer:(struct __CVBuffer { }*)arg2 withCardBuffer:(struct __CVBuffer { }*)arg3 pixelFocalLength:(id)arg4;
+ (id)extractCardImage:(struct vImage_Buffer { void *x1; unsigned int x2; unsigned int x3; unsigned int x4; }*)arg1 fromPixelBuffer:(struct __CVBuffer { }*)arg2 withCardBuffer:(struct __CVBuffer { }*)arg3 withPoints:(id)arg4 pixelFocalLength:(id)arg5;
+ (id)findCCExpDateInImage:(struct vImage_Buffer { void *x1; unsigned int x2; unsigned int x3; unsigned int x4; })arg1 useCombinedEngine:(BOOL)arg2;
+ (id)findCCExpDateInImage:(struct vImage_Buffer { void *x1; unsigned int x2; unsigned int x3; unsigned int x4; })arg1 useCombinedEngine:(BOOL)arg2 usingTextFeatures:(id)arg3;
+ (id)findCCExpDateInImage:(struct vImage_Buffer { void *x1; unsigned int x2; unsigned int x3; unsigned int x4; })arg1 usingTextFeatures:(id)arg2;
+ (id)findCCNameInImage:(struct vImage_Buffer { void *x1; unsigned int x2; unsigned int x3; unsigned int x4; })arg1 useCombinedEngine:(BOOL)arg2;
+ (id)findCCNameInImage:(struct vImage_Buffer { void *x1; unsigned int x2; unsigned int x3; unsigned int x4; })arg1 useCombinedEngine:(BOOL)arg2 usingTextFeatures:(id)arg3;
+ (id)findCCNameInImage:(struct vImage_Buffer { void *x1; unsigned int x2; unsigned int x3; unsigned int x4; })arg1 usingTextFeatures:(id)arg2;
+ (id)findCCNumberInImage:(struct vImage_Buffer { void *x1; unsigned int x2; unsigned int x3; unsigned int x4; })arg1 useCombinedEngine:(BOOL)arg2;
+ (id)findCCNumberInImage:(struct vImage_Buffer { void *x1; unsigned int x2; unsigned int x3; unsigned int x4; })arg1 useCombinedEngine:(BOOL)arg2 usingTextFeatures:(id)arg3;
+ (id)findCCNumberInImage:(struct vImage_Buffer { void *x1; unsigned int x2; unsigned int x3; unsigned int x4; })arg1 usingTextFeatures:(id)arg2;
+ (id)findCCObject:(id)arg1 inImage:(struct vImage_Buffer { void *x1; unsigned int x2; unsigned int x3; unsigned int x4; })arg2 forRect:(id)arg3 rotateRectImage:(BOOL)arg4 useFlatEngine:(BOOL)arg5;
+ (id)findCCObjects:(id)arg1 InImage:(struct vImage_Buffer { void *x1; unsigned int x2; unsigned int x3; unsigned int x4; })arg2 nameRects:(id)arg3 dateRects:(id)arg4 useFlatEngine:(BOOL)arg5;
+ (id)findCCObjects:(id)arg1 inImage:(struct vImage_Buffer { void *x1; unsigned int x2; unsigned int x3; unsigned int x4; })arg2 numberRects:(id)arg3 nameRects:(id)arg4 dateRects:(id)arg5 isDetectedRect:(BOOL)arg6 useFlatEngine:(BOOL)arg7;
+ (id)findCodeInImage:(struct vImage_Buffer { void *x1; unsigned int x2; unsigned int x3; unsigned int x4; })arg1 maxStage:(unsigned int)arg2;
+ (id)findCodeInImage:(struct vImage_Buffer { void *x1; unsigned int x2; unsigned int x3; unsigned int x4; })arg1 maxStage:(unsigned int)arg2 outputObjectTypes:(id)arg3;
+ (id)findCodeInImage:(struct vImage_Buffer { void *x1; unsigned int x2; unsigned int x3; unsigned int x4; })arg1 maxStage:(unsigned int)arg2 roi:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
+ (id)findCodeInImage:(struct vImage_Buffer { void *x1; unsigned int x2; unsigned int x3; unsigned int x4; })arg1 maxStage:(unsigned int)arg2 roi:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 outputObjectTypes:(id)arg4;
+ (id)findObjects:(id)arg1 inCorrectedImage:(struct vImage_Buffer { void *x1; unsigned int x2; unsigned int x3; unsigned int x4; })arg2;
+ (id)findObjects:(id)arg1 inCorrectedImage:(struct vImage_Buffer { void *x1; unsigned int x2; unsigned int x3; unsigned int x4; })arg2 nameRects:(id)arg3 dateRects:(id)arg4 useFlatEngine:(BOOL)arg5;
+ (id)findObjects:(id)arg1 inImage:(id)arg2 properties:(id)arg3;
+ (id)findObjects:(id)arg1 inPixelBuffer:(struct __CVBuffer { }*)arg2 withFixedCut:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
+ (id)findObjects:(id)arg1 inPixelBuffer:(struct __CVBuffer { }*)arg2 withFixedCut:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 nameRects:(id)arg4 dateRects:(id)arg5 useFlatEngine:(BOOL)arg6;
+ (void)loadFonts;
+ (unsigned int)supportedCameraCount;
+ (int)targetRectsForImage:(struct __CVBuffer { }*)arg1 cardNumberRects:(id*)arg2 cardholderRects:(id*)arg3 expirationRects:(id*)arg4;

- (void).cxx_destruct;
- (id)activityIndicator;
- (void)aetPlacementTextColor:(id)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (id)alignmentLayer;
- (void)animatePresentCode;
- (id)boxLayer;
- (id)boxLayerHideTimer;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boxLayerPresentationFrame;
- (id)callbackDelegate;
- (id)cameraMode;
- (int)cameraPosition;
- (void)cancel;
- (id)captureBuffer;
- (unsigned int)captureCount;
- (void)captureImage;
- (void)captureImageFromSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 fromConnection:(id)arg3;
- (id)capturedTextColor;
- (id)cardNumberCounts;
- (id)cardholderCounts;
- (BOOL)codeInverted;
- (id)codePresented;
- (float)configDemoSpeed;
- (BOOL)configExperimentalMode;
- (BOOL)configPresentCentered;
- (BOOL)configUseFastScanning;
- (BOOL)configUseJPEGForColor;
- (BOOL)continousMode;
- (int)currentCameraIdentifier;
- (id)currentDeviceID;
- (id)dateCutRects;
- (void)dealloc;
- (id)delegateQueue;
- (id)diagnosticHUDLayer;
- (void)didReceiveMemoryWarning;
- (BOOL)didSendEndOrCancel;
- (BOOL)didSendFindBox;
- (id)expirationDateCounts;
- (int)exposureMode;
- (void)findCodeInSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)findObjects:(id)arg1 inPixelBuffer:(struct __CVBuffer { }*)arg2 attachments:(id)arg3;
- (void)flashScreenAndPlayCaptureSound;
- (int)focusMode;
- (id)foundCode;
- (BOOL)foundNumberEmbossed;
- (BOOL)foundNumberFixedSapphire;
- (BOOL)foundNumberFixedSlate;
- (BOOL)foundNumberFlatISO;
- (BOOL)foundNumberFreeform;
- (BOOL)foundNumberPortrait;
- (BOOL)foundNumberTextDetector;
- (id)foundPoints;
- (id)generateStringFromDate:(id)arg1;
- (void)handleTapFrom:(id)arg1;
- (void)hideBoxLayer;
- (BOOL)hidePlacementText;
- (unsigned int)imagesToCapture;
- (id)init;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (BOOL)isCaptureMode;
- (struct opaqueCMSampleBuffer { }*)lastBuffer;
- (id)lastFieldFoundDate;
- (id)lastFoundNumberDate;
- (id)lastSendFindBox;
- (void)loadView;
- (id)maskColor;
- (id)maskOutlineColor;
- (id)nameCutRects;
- (void)orientationDidChange:(id)arg1;
- (id)outputObjectTypes;
- (void)pauseBoxLayerHideTimer;
- (id)pinnedFoundInfo;
- (id)placementTextColor;
- (id)pointsFound;
- (struct OpaqueVTPixelTransferSession { }*)previewScaleSession;
- (BOOL)previousIdleState;
- (void)primeBoxLayerHideTimer;
- (id)processingImage;
- (id)processingQueue;
- (void)removeLayerTree;
- (void)reportAcceptedString:(id)arg1 forOutput:(id)arg2 withClientID:(id)arg3;
- (void)sendDidCancel;
- (void)sendDidDisplayMessageStyle:(int)arg1;
- (void)sendDidEndAnimation;
- (void)sendDidEndWithError:(id)arg1;
- (void)sendDidEndWithErrorDomain:(id)arg1 code:(int)arg2 userInfo:(id)arg3;
- (void)sendDidEndWithInfo:(id)arg1;
- (void)sendDidFindTarget:(id)arg1;
- (void)sendDidRecognizeNewObjects:(id)arg1;
- (id)sessionManager;
- (id)sessionStarted;
- (double)sessionTimeout;
- (void)setActivityIndicator:(id)arg1;
- (void)setAlignmentLayer:(id)arg1;
- (void)setBoxLayer:(id)arg1;
- (void)setBoxLayerHideTimer:(id)arg1;
- (void)setCallbackDelegate:(id)arg1;
- (void)setCameraMode:(id)arg1;
- (void)setCameraPosition:(int)arg1;
- (void)setCaptureBuffer:(id)arg1;
- (void)setCaptureCount:(unsigned int)arg1;
- (void)setCaptureMode:(BOOL)arg1;
- (void)setCapturedTextColor:(id)arg1;
- (void)setCardNumberCounts:(id)arg1;
- (void)setCardholderCounts:(id)arg1;
- (void)setCodeInverted:(BOOL)arg1;
- (void)setCodePresented:(id)arg1;
- (void)setConfigDemoSpeed:(float)arg1;
- (void)setConfigExperimentalMode:(BOOL)arg1;
- (void)setConfigPresentCentered:(BOOL)arg1;
- (void)setConfigUseFastScanning:(BOOL)arg1;
- (void)setConfigUseJPEGForColor:(BOOL)arg1;
- (void)setContinousMode:(BOOL)arg1;
- (void)setDateCutRects:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegateQueue:(id)arg1;
- (void)setDiagnosticHUDLayer:(id)arg1;
- (void)setDidSendEndOrCancel:(BOOL)arg1;
- (void)setDidSendFindBox:(BOOL)arg1;
- (void)setExpirationDateCounts:(id)arg1;
- (void)setExposureMode:(int)arg1;
- (void)setFocusMode:(int)arg1;
- (void)setFoundCode:(id)arg1;
- (void)setFoundNumberEmbossed:(BOOL)arg1;
- (void)setFoundNumberFixedSapphire:(BOOL)arg1;
- (void)setFoundNumberFixedSlate:(BOOL)arg1;
- (void)setFoundNumberFlatISO:(BOOL)arg1;
- (void)setFoundNumberFreeform:(BOOL)arg1;
- (void)setFoundNumberPortrait:(BOOL)arg1;
- (void)setFoundNumberTextDetector:(BOOL)arg1;
- (void)setFoundPoints:(id)arg1;
- (void)setHidePlacementText:(BOOL)arg1;
- (void)setImagesToCapture:(unsigned int)arg1;
- (void)setLastBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)setLastFieldFoundDate:(id)arg1;
- (void)setLastFoundNumberDate:(id)arg1;
- (void)setLastSendFindBox:(id)arg1;
- (void)setMaskColor:(id)arg1;
- (void)setMaskOutlineColor:(id)arg1;
- (void)setNameCutRects:(id)arg1;
- (void)setOutputObjectTypes:(id)arg1;
- (void)setPinnedFoundInfo:(id)arg1;
- (void)setPlacementTextColor:(id)arg1;
- (void)setPointsFound:(id)arg1;
- (void)setPreviewScaleSession:(struct OpaqueVTPixelTransferSession { }*)arg1;
- (void)setPreviousIdleState:(BOOL)arg1;
- (void)setProcessingImage:(id)arg1;
- (void)setProcessingQueue:(id)arg1;
- (void)setSessionManager:(id)arg1;
- (void)setSessionStarted:(id)arg1;
- (void)setSessionTimeout:(double)arg1;
- (void)setShowDiagnosticHUD:(BOOL)arg1;
- (void)setTapGestureRecognizer:(id)arg1;
- (void)setTorchMode:(int)arg1;
- (void)setWhiteBalanceMode:(int)arg1;
- (BOOL)showDiagnosticHUD;
- (void)showMessage:(id)arg1 color:(id)arg2 style:(int)arg3 duration:(double)arg4;
- (void)start;
- (void)startSession;
- (void)stopSession;
- (void)switchToCamera:(int)arg1;
- (void)switchToCameraWithDeviceID:(id)arg1;
- (id)tapGestureRecognizer;
- (void)toggleCamera;
- (int)torchMode;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (int)whiteBalanceMode;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;

@end
