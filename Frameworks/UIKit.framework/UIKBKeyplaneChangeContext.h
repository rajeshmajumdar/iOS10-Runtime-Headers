/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBKeyplaneChangeContext : NSObject {
    BOOL  _selfSizingChanged;
    struct CGSize { 
        float width; 
        float height; 
    }  _size;
    BOOL  _sizeDidChange;
    BOOL  _splitWidthsChanged;
}

@property (nonatomic) BOOL selfSizingChanged;
@property (nonatomic) struct CGSize { float x1; float x2; } size;
@property (nonatomic, readonly) BOOL sizeDidChange;
@property (nonatomic) BOOL splitWidthsChanged;

+ (id)keyplaneChangeContext;
+ (id)keyplaneChangeContextWithSize:(struct CGSize { float x1; float x2; })arg1;

- (BOOL)selfSizingChanged;
- (void)setSelfSizingChanged:(BOOL)arg1;
- (void)setSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setSplitWidthsChanged:(BOOL)arg1;
- (struct CGSize { float x1; float x2; })size;
- (BOOL)sizeDidChange;
- (BOOL)splitWidthsChanged;

@end
