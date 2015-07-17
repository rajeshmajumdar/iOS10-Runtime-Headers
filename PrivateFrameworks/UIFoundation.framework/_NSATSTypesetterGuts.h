/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface _NSATSTypesetterGuts : NSObject {
    char * _bidiLevels;
    struct __CTTypesetter { } * _ctTypesetter;
    float  _defaultTighteningFactor;
    struct { 
        unsigned int _isiChatTypesetter : 1; 
        unsigned int _resToWillSetLineFragmentRect : 1; 
        unsigned int _isBusy : 1; 
        unsigned int _baselineRendering : 1; 
        unsigned int _forceWordWrapping : 1; 
        unsigned int _reserved : 27; 
    }  _flags;
    NSATSGlyphStorage * _glyphStorage;
    unsigned int  _lastContainerIndex;
    unsigned int  _lastGlyphIndex;
    unsigned int  _lineBreakStrategy;
    NSATSLineFragment * _lineFragment;
    union { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; int x_1_1_4; } x1; struct { struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_2_1_1; } x2; } * _lineFragmentRectArgs;
    NSParagraphArbitrator * _paragraphArbitrator;
    struct { 
        unsigned int _resolvedWritingDirection : 2; 
        unsigned int _reserved : 30; 
    }  _paragraphState;
    struct { struct { /* ? */ } *x1; struct _NSRange { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; struct _NSRange { unsigned int x_3_1_1; unsigned int x_3_1_2; } x3; float x4; float x5; int (*x6)(); int (*x7)(); float x8; float x9; float x10; float x11; float x12; float x13; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_14_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_14_1_2; } x14; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_15_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_15_1_2; } x15; struct _NSRange { unsigned int x_16_1_1; unsigned int x_16_1_2; } x16; id x17; int x18; struct { unsigned int x_19_1_1 : 4; unsigned int x_19_1_2 : 1; unsigned int x_19_1_3 : 1; unsigned int x_19_1_4 : 1; unsigned int x_19_1_5 : 4; unsigned int x_19_1_6 : 4; unsigned int x_19_1_7 : 1; unsigned int x_19_1_8 : 1; unsigned int x_19_1_9 : 1; unsigned int x_19_1_10 : 1; unsigned int x_19_1_11 : 2; unsigned int x_19_1_12 : 1; unsigned int x_19_1_13 : 10; } x19; void *x20[0]; } * _typesetterAuxiliary;
}

- (void)dealloc;
- (void)finalize;
- (id)initWithTypesetter:(id)arg1;

@end
