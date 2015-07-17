/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKAttachmentMessagePartChatItem : CKMessagePartChatItem {
    CKMediaObject * _mediaObject;
}

@property (nonatomic, retain) CKMediaObject *mediaObject;
@property (nonatomic, readonly, copy) NSString *transferGUID;

- (unsigned int)balloonCorners;
- (Class)balloonViewClass;
- (BOOL)canCopy;
- (BOOL)canExport;
- (BOOL)canForward;
- (id)composition;
- (void)dealloc;
- (id)description;
- (id)initWithIMChatItem:(id)arg1 maxWidth:(float)arg2;
- (id)mediaObject;
- (id)pasteboardItems;
- (void)setMediaObject:(id)arg1;
- (id)transferGUID;

@end
