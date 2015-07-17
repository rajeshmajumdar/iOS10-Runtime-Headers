/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBTextStyle : NSObject <NSCopying> {
    NSString * _etchColor;
    struct CGPoint { 
        float x; 
        float y; 
    }  _etchOffset;
    NSString * _fontName;
    float  _fontSize;
    BOOL  _ignoreTextMarginOnKey;
    float  _kerning;
    float  _minFontSize;
    float  _pathWeight;
    int  _selector;
    NSString * _textColor;
    struct CGPoint { 
        float x; 
        float y; 
    }  _textOffset;
    float  _textOpacity;
}

@property (nonatomic, retain) NSString *etchColor;
@property (nonatomic) struct CGPoint { float x1; float x2; } etchOffset;
@property (nonatomic, retain) NSString *fontName;
@property (nonatomic) float fontSize;
@property (nonatomic) BOOL ignoreTextMarginOnKey;
@property (nonatomic) float kerning;
@property (nonatomic) float minFontSize;
@property (nonatomic) float pathWeight;
@property (nonatomic) int selector;
@property (nonatomic, retain) NSString *textColor;
@property (nonatomic) struct CGPoint { float x1; float x2; } textOffset;
@property (nonatomic) float textOpacity;

+ (id)styleWithFontName:(id)arg1 withFontSize:(float)arg2;
+ (id)styleWithTextColor:(id)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)etchColor;
- (struct CGPoint { float x1; float x2; })etchOffset;
- (id)fontName;
- (float)fontSize;
- (BOOL)ignoreTextMarginOnKey;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (float)kerning;
- (float)minFontSize;
- (void)overlayWithStyle:(id)arg1;
- (float)pathWeight;
- (int)selector;
- (void)setEtchColor:(id)arg1;
- (void)setEtchOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)setFontName:(id)arg1;
- (void)setFontSize:(float)arg1;
- (void)setIgnoreTextMarginOnKey:(BOOL)arg1;
- (void)setKerning:(float)arg1;
- (void)setMinFontSize:(float)arg1;
- (void)setPathWeight:(float)arg1;
- (void)setSelector:(int)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTextOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)setTextOpacity:(float)arg1;
- (id)textColor;
- (struct CGPoint { float x1; float x2; })textOffset;
- (float)textOpacity;

@end
