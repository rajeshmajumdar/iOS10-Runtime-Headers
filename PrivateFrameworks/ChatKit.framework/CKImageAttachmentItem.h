/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKImageAttachmentItem : CKAttachmentItem {
    BOOL  _backgroundEnqueued;
    struct CGSize { 
        float width; 
        float height; 
    }  _imageSize;
    BOOL  _useDefaultSize;
}

@property (nonatomic) BOOL backgroundEnqueued;
@property struct CGSize { float x1; float x2; } imageSize;
@property (nonatomic) BOOL useDefaultSize;

+ (id)UTITypes;

- (struct CGSize { float x1; float x2; })_calculateImageSize;
- (id)_newImageData;
- (BOOL)backgroundEnqueued;
- (void)generatePreviewWithCompletion:(id /* block */)arg1;
- (id)imageData;
- (struct CGSize { float x1; float x2; })imageSize;
- (void)setBackgroundEnqueued:(BOOL)arg1;
- (void)setImageSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setUseDefaultSize:(BOOL)arg1;
- (struct CGSize { float x1; float x2; })size;
- (void)startDeferredSetup;
- (BOOL)useDefaultSize;

@end
