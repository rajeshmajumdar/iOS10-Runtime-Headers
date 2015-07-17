/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKMessageStatusChatItem : CKChatItem {
    struct CGSize { 
        float width; 
        float height; 
    }  _buttonSize;
    BOOL  _buttonSizeLoaded;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _buttonTextAlignmentInsets;
    NSAttributedString * _transcriptButtonText;
}

@property (nonatomic, readonly) struct CGSize { float x1; float x2; } buttonSize;
@property (getter=isButtonSizeLoaded, nonatomic) BOOL buttonSizeLoaded;
@property (nonatomic, readonly) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } buttonTextAlignmentInsets;
@property (nonatomic, readonly) int buttonType;
@property (nonatomic, copy) NSAttributedString *transcriptButtonText;

+ (id)thePastDateFormatter;
+ (id)thisWeekRelativeDateFormatter;
+ (id)todayDateFormatter;

- (struct CGSize { float x1; float x2; })buttonSize;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })buttonTextAlignmentInsets;
- (int)buttonType;
- (Class)cellClass;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentInsets;
- (unsigned int)count;
- (void)dealloc;
- (int)expireStatusType;
- (BOOL)isButtonSizeLoaded;
- (BOOL)isFromMe;
- (struct CGSize { float x1; float x2; })loadButtonSizeThatFits:(struct CGSize { float x1; float x2; })arg1 textAlignmentInsets:(out struct UIEdgeInsets { float x1; float x2; float x3; float x4; }*)arg2;
- (struct CGSize { float x1; float x2; })loadSizeThatFits:(struct CGSize { float x1; float x2; })arg1 textAlignmentInsets:(out struct UIEdgeInsets { float x1; float x2; float x3; float x4; }*)arg2;
- (id)loadTranscriptButtonText;
- (id)loadTranscriptText;
- (id)now;
- (void)setButtonSizeLoaded:(BOOL)arg1;
- (void)setTranscriptButtonText:(id)arg1;
- (int)statusType;
- (id)time;
- (id)transcriptButtonText;
- (BOOL)transcriptOrientation;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })transcriptTextAlignmentInsets;
- (void)unloadSize;
- (void)unloadTranscriptText;
- (BOOL)wantsDrawerLayout;

@end
