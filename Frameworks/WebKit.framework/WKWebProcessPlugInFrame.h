/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/WebKit.framework/WebKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSURL, NSArray, _WKFrameHandle;

@interface WKWebProcessPlugInFrame : NSObject <WKObject> {
    struct ObjectStorage<WebKit::WebFrame> { 
        struct type { 
            unsigned char __lx[112]; 
        } data; 
    } _frame;
}

@property(readonly) NSURL * URL;
@property(readonly) NSArray * childFrames;
@property(readonly) bool containsAnyFormElements;
@property(readonly) _WKFrameHandle * handle;
@property(readonly) struct Object { int (**x1)(); id x2; }* _apiObject;

+ (id)lookUpFrameFromHandle:(id)arg1;

- (id)_provisionalURL;
- (bool)_hasCustomContentProvider;
- (bool)containsAnyFormElements;
- (id)_browserContextController;
- (id)jsNodeForNodeHandle:(id)arg1 inWorld:(id)arg2;
- (id)jsContextForWorld:(id)arg1;
- (id)_certificateChain;
- (struct Object { int (**x1)(); id x2; }*)_apiObject;
- (id)childFrames;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1;
- (id)handle;
- (id)URL;
- (void)dealloc;
- (id).cxx_construct;

@end