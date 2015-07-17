/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
 */

@interface HLPHelpTopicHistoryItem : NSObject <NSCoding, NSCopying> {
    struct CGPoint { 
        float x; 
        float y; 
    }  _contentOffset;
    struct CGSize { 
        float width; 
        float height; 
    }  _contentSize;
    NSString * _identifier;
}

@property (nonatomic) struct CGPoint { float x1; float x2; } contentOffset;
@property (nonatomic) struct CGSize { float x1; float x2; } contentSize;
@property (nonatomic, retain) NSString *identifier;

- (void).cxx_destruct;
- (struct CGPoint { float x1; float x2; })contentOffset;
- (struct CGSize { float x1; float x2; })contentSize;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (void)setContentOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)setContentSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setIdentifier:(id)arg1;

@end
