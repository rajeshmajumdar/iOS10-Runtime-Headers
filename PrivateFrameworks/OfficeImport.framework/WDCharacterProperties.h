/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WDCharacterProperties : NSObject {
    WDDocument * mDocument;
    unsigned int  mOriginal;
    struct { id x1; id x2; id x3; id x4; int x5; int x6; int x7; id x8; id x9; id x10; int x11; int x12; short x13; short x14; id x15; float x16; unsigned short x17; unsigned short x18; unsigned short x19; unsigned short x20; unsigned short x21; unsigned short x22; unsigned short x23; unsigned char x24; unsigned char x25; float x26; unsigned char x27; unsigned char x28; unsigned char x29; unsigned char x30; unsigned char x31; unsigned char x32; unsigned char x33; unsigned char x34; int x35; unsigned char x36; unsigned char x37; BOOL x38; unsigned char x39; unsigned char x40; unsigned char x41; unsigned char x42; unsigned char x43; unsigned char x44; unsigned char x45; unsigned char x46; unsigned char x47; unsigned char x48; unsigned short x49; unsigned int x50 : 1; unsigned int x51 : 1; unsigned int x52 : 1; unsigned int x53 : 1; unsigned int x54 : 1; unsigned int x55 : 1; unsigned int x56 : 1; unsigned int x57 : 1; unsigned int x58 : 1; unsigned int x59 : 1; unsigned int x60 : 1; unsigned int x61 : 1; unsigned int x62 : 1; unsigned int x63 : 1; unsigned int x64 : 1; unsigned int x65 : 1; unsigned int x66 : 1; unsigned int x67 : 1; unsigned int x68 : 1; unsigned int x69 : 1; unsigned int x70 : 1; unsigned int x71 : 1; unsigned int x72 : 1; unsigned int x73 : 1; unsigned int x74 : 1; unsigned int x75 : 1; unsigned int x76 : 1; unsigned int x77 : 1; unsigned int x78 : 1; unsigned int x79 : 1; unsigned int x80 : 1; unsigned int x81 : 1; unsigned int x82 : 1; unsigned int x83 : 1; unsigned int x84 : 1; unsigned int x85 : 1; unsigned int x86 : 1; unsigned int x87 : 1; unsigned int x88 : 1; unsigned int x89 : 1; unsigned int x90 : 1; unsigned int x91 : 1; unsigned int x92 : 1; unsigned int x93 : 1; unsigned int x94 : 1; unsigned int x95 : 1; unsigned int x96 : 1; unsigned int x97 : 1; unsigned int x98 : 1; unsigned int x99 : 1; unsigned int x100 : 1; unsigned int x101 : 1; unsigned int x102 : 1; unsigned int x103 : 1; unsigned int x104 : 1; unsigned int x105 : 1; unsigned int x106 : 1; unsigned int x107 : 1; unsigned int x108 : 1; unsigned int x109 : 1; unsigned int x110 : 1; unsigned int x111 : 1; unsigned int x112 : 1; unsigned int x113 : 1; unsigned int x114 : 1; unsigned int x115 : 1; unsigned int x116 : 1; unsigned int x117 : 1; unsigned int x118 : 1; unsigned int x119 : 1; unsigned int x120 : 1; unsigned int x121 : 1; unsigned int x122 : 1; unsigned int x123 : 1; unsigned int x124 : 1; unsigned int x125 : 1; unsigned int x126 : 1; } * mOriginalProperties;
    unsigned int  mResolved;
    unsigned int  mTracked;
    struct { id x1; id x2; id x3; id x4; int x5; int x6; int x7; id x8; id x9; id x10; int x11; int x12; short x13; short x14; id x15; float x16; unsigned short x17; unsigned short x18; unsigned short x19; unsigned short x20; unsigned short x21; unsigned short x22; unsigned short x23; unsigned char x24; unsigned char x25; float x26; unsigned char x27; unsigned char x28; unsigned char x29; unsigned char x30; unsigned char x31; unsigned char x32; unsigned char x33; unsigned char x34; int x35; unsigned char x36; unsigned char x37; BOOL x38; unsigned char x39; unsigned char x40; unsigned char x41; unsigned char x42; unsigned char x43; unsigned char x44; unsigned char x45; unsigned char x46; unsigned char x47; unsigned char x48; unsigned short x49; unsigned int x50 : 1; unsigned int x51 : 1; unsigned int x52 : 1; unsigned int x53 : 1; unsigned int x54 : 1; unsigned int x55 : 1; unsigned int x56 : 1; unsigned int x57 : 1; unsigned int x58 : 1; unsigned int x59 : 1; unsigned int x60 : 1; unsigned int x61 : 1; unsigned int x62 : 1; unsigned int x63 : 1; unsigned int x64 : 1; unsigned int x65 : 1; unsigned int x66 : 1; unsigned int x67 : 1; unsigned int x68 : 1; unsigned int x69 : 1; unsigned int x70 : 1; unsigned int x71 : 1; unsigned int x72 : 1; unsigned int x73 : 1; unsigned int x74 : 1; unsigned int x75 : 1; unsigned int x76 : 1; unsigned int x77 : 1; unsigned int x78 : 1; unsigned int x79 : 1; unsigned int x80 : 1; unsigned int x81 : 1; unsigned int x82 : 1; unsigned int x83 : 1; unsigned int x84 : 1; unsigned int x85 : 1; unsigned int x86 : 1; unsigned int x87 : 1; unsigned int x88 : 1; unsigned int x89 : 1; unsigned int x90 : 1; unsigned int x91 : 1; unsigned int x92 : 1; unsigned int x93 : 1; unsigned int x94 : 1; unsigned int x95 : 1; unsigned int x96 : 1; unsigned int x97 : 1; unsigned int x98 : 1; unsigned int x99 : 1; unsigned int x100 : 1; unsigned int x101 : 1; unsigned int x102 : 1; unsigned int x103 : 1; unsigned int x104 : 1; unsigned int x105 : 1; unsigned int x106 : 1; unsigned int x107 : 1; unsigned int x108 : 1; unsigned int x109 : 1; unsigned int x110 : 1; unsigned int x111 : 1; unsigned int x112 : 1; unsigned int x113 : 1; unsigned int x114 : 1; unsigned int x115 : 1; unsigned int x116 : 1; unsigned int x117 : 1; unsigned int x118 : 1; unsigned int x119 : 1; unsigned int x120 : 1; unsigned int x121 : 1; unsigned int x122 : 1; unsigned int x123 : 1; unsigned int x124 : 1; unsigned int x125 : 1; unsigned int x126 : 1; } * mTrackedProperties;
}

+ (SEL)fontOverriddenSelectorForFontType:(int)arg1;
+ (SEL)fontSelectorForFontType:(int)arg1;
+ (SEL)setFontSelectorForFontType:(int)arg1;

- (void)applyPropertiesFrom:(id)arg1 ifOverriddenIn:(id)arg2;
- (id)baseStyle;
- (int)bold;
- (int)boldForBiText;
- (id)border;
- (int)bracketTwoLinesInOne;
- (int)caps;
- (int)charPositionOfPictureBulletInBookmark;
- (void)clearBaseStyle;
- (id)color;
- (BOOL)compressHorizontalInVertical;
- (void)copyPropertiesInto:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (int)deleted;
- (id)deletionDate;
- (BOOL)deletionDifferentFrom:(id)arg1;
- (BOOL)deletionDifferentFrom:(id)arg1 mode:(int)arg2;
- (id)description;
- (id)document;
- (int)doubleStrikeThrough;
- (id)editDate;
- (BOOL)editDifferentFrom:(id)arg1;
- (BOOL)editDifferentFrom:(id)arg1 mode:(int)arg2;
- (int)edited;
- (BOOL)embeddedObject;
- (int)embossed;
- (int)emphasisMark;
- (id)extendedFont;
- (id)farEastFont;
- (id)font;
- (id)fontForFontType:(int)arg1;
- (int)fontHint;
- (unsigned short)fontSize;
- (unsigned short)fontSizeForBiText;
- (int)formattingChanged;
- (BOOL)formattingChangedDifferentFrom:(id)arg1;
- (BOOL)formattingChangedDifferentFrom:(id)arg1 mode:(int)arg2;
- (int)hidden;
- (int)highlightColor;
- (BOOL)horizontalInVertical;
- (int)imprint;
- (unsigned short)indexToAuthorIDOfDeletion;
- (unsigned short)indexToAuthorIDOfEdit;
- (unsigned short)indexToAuthorIDOfFormattingChange;
- (id)initWithDocument:(id)arg1;
- (BOOL)isAnythingOverridden;
- (BOOL)isAnythingOverriddenIn:(struct { id x1; id x2; id x3; id x4; int x5; int x6; int x7; id x8; id x9; id x10; int x11; int x12; short x13; short x14; id x15; float x16; unsigned short x17; unsigned short x18; unsigned short x19; unsigned short x20; unsigned short x21; unsigned short x22; unsigned short x23; unsigned char x24; unsigned char x25; float x26; unsigned char x27; unsigned char x28; unsigned char x29; unsigned char x30; unsigned char x31; unsigned char x32; unsigned char x33; unsigned char x34; int x35; unsigned char x36; unsigned char x37; BOOL x38; unsigned char x39; unsigned char x40; unsigned char x41; unsigned char x42; unsigned char x43; unsigned char x44; unsigned char x45; unsigned char x46; unsigned char x47; unsigned char x48; unsigned short x49; unsigned int x50 : 1; unsigned int x51 : 1; unsigned int x52 : 1; unsigned int x53 : 1; unsigned int x54 : 1; unsigned int x55 : 1; unsigned int x56 : 1; unsigned int x57 : 1; unsigned int x58 : 1; unsigned int x59 : 1; unsigned int x60 : 1; unsigned int x61 : 1; unsigned int x62 : 1; unsigned int x63 : 1; unsigned int x64 : 1; unsigned int x65 : 1; unsigned int x66 : 1; unsigned int x67 : 1; unsigned int x68 : 1; unsigned int x69 : 1; unsigned int x70 : 1; unsigned int x71 : 1; unsigned int x72 : 1; unsigned int x73 : 1; unsigned int x74 : 1; unsigned int x75 : 1; unsigned int x76 : 1; unsigned int x77 : 1; unsigned int x78 : 1; unsigned int x79 : 1; unsigned int x80 : 1; unsigned int x81 : 1; unsigned int x82 : 1; unsigned int x83 : 1; unsigned int x84 : 1; unsigned int x85 : 1; unsigned int x86 : 1; unsigned int x87 : 1; unsigned int x88 : 1; unsigned int x89 : 1; unsigned int x90 : 1; unsigned int x91 : 1; unsigned int x92 : 1; unsigned int x93 : 1; unsigned int x94 : 1; unsigned int x95 : 1; unsigned int x96 : 1; unsigned int x97 : 1; unsigned int x98 : 1; unsigned int x99 : 1; unsigned int x100 : 1; unsigned int x101 : 1; unsigned int x102 : 1; unsigned int x103 : 1; unsigned int x104 : 1; unsigned int x105 : 1; unsigned int x106 : 1; unsigned int x107 : 1; unsigned int x108 : 1; unsigned int x109 : 1; unsigned int x110 : 1; unsigned int x111 : 1; unsigned int x112 : 1; unsigned int x113 : 1; unsigned int x114 : 1; unsigned int x115 : 1; unsigned int x116 : 1; unsigned int x117 : 1; unsigned int x118 : 1; unsigned int x119 : 1; unsigned int x120 : 1; unsigned int x121 : 1; unsigned int x122 : 1; unsigned int x123 : 1; unsigned int x124 : 1; unsigned int x125 : 1; unsigned int x126 : 1; }*)arg1;
- (BOOL)isBaseStyleOverridden;
- (BOOL)isBoldForBiTextOverridden;
- (BOOL)isBoldOverridden;
- (BOOL)isBooleanProbablyDifferent:(unsigned char)arg1 than:(unsigned char)arg2;
- (BOOL)isBorderOverridden;
- (BOOL)isBracketTwoLinesInOneOverridden;
- (BOOL)isCapsOverridden;
- (BOOL)isCharPositionOfPictureBulletInBookmarkOverridden;
- (BOOL)isColorAuto;
- (BOOL)isColorAutoOverridden;
- (BOOL)isColorOverridden;
- (BOOL)isCompressHorizontalInVerticalOverridden;
- (BOOL)isDeletedOverridden;
- (BOOL)isDeletionDateOverridden;
- (BOOL)isDoubleStrikeThroughOverridden;
- (BOOL)isEditDateOverridden;
- (BOOL)isEditedOverridden;
- (BOOL)isEmbeddedObjectOverridden;
- (BOOL)isEmbossedOverridden;
- (BOOL)isEmphasisMarkOverridden;
- (BOOL)isExtendedFontOverridden;
- (BOOL)isFarEastFontOverridden;
- (BOOL)isFontHintOverridden;
- (BOOL)isFontOverridden;
- (BOOL)isFontOverriddenForFontType:(int)arg1;
- (BOOL)isFontSizeForBiTextOverridden;
- (BOOL)isFontSizeOverridden;
- (BOOL)isFormattingChangedOverridden;
- (BOOL)isHiddenOverridden;
- (BOOL)isHighlight;
- (BOOL)isHighlightColorOverridden;
- (BOOL)isHighlightOverridden;
- (BOOL)isHorizontalInVerticalOverridden;
- (BOOL)isImprintOverridden;
- (BOOL)isIndexToAuthorIDOfDeletionOverridden;
- (BOOL)isIndexToAuthorIDOfEditOverridden;
- (BOOL)isIndexToAuthorIDOfFormattingChangeOverridden;
- (BOOL)isItalicForBiTextOverridden;
- (BOOL)isItalicOverridden;
- (BOOL)isKerningOverridden;
- (BOOL)isLanguageForBiTextOverridden;
- (BOOL)isLanguageForDefaultTextOverridden;
- (BOOL)isLanguageForFarEastOverridden;
- (BOOL)isLigatureOverridden;
- (BOOL)isListCharacterPictureBullet;
- (BOOL)isListCharacterPictureBulletOverridden;
- (BOOL)isLowerCase;
- (BOOL)isLowerCaseOverridden;
- (BOOL)isObjectIDForOle2Overridden;
- (BOOL)isOffsetToPictureDataOverridden;
- (BOOL)isOle2Overridden;
- (BOOL)isOutline2010WidthOverridden;
- (BOOL)isOutlineColorOverridden;
- (BOOL)isOutlineOverridden;
- (BOOL)isPositionOverridden;
- (BOOL)isReflectionOverridden;
- (BOOL)isRightToLeftOverridden;
- (BOOL)isShadingOverridden;
- (BOOL)isShadow2010OpacityOverridden;
- (BOOL)isShadow2010Overridden;
- (BOOL)isShadowOverridden;
- (BOOL)isSmallCapsOverridden;
- (BOOL)isSpacingOverridden;
- (BOOL)isSpecialCharacter;
- (BOOL)isSpecialCharacterOverridden;
- (BOOL)isStrikeThroughOverridden;
- (BOOL)isSymbolCharacterOverridden;
- (BOOL)isSymbolFontOverridden;
- (BOOL)isTextScaleOverridden;
- (BOOL)isTwoLinesInOneOverridden;
- (BOOL)isUnderlineColorOverridden;
- (BOOL)isUnderlineOverridden;
- (BOOL)isUseCsFontOverridden;
- (BOOL)isVerticalAlignOverridden;
- (int)italic;
- (int)italicForBiText;
- (unsigned short)kerning;
- (int)languageForBiText;
- (int)languageForDefaultText;
- (int)languageForFarEast;
- (int)ligature;
- (id)mutableBorder;
- (id)mutableShading;
- (void)negateFormattingChangesWithDefaults:(id)arg1;
- (int)objectIDForOle2;
- (int)offsetToPictureData;
- (BOOL)ole2;
- (int)outline;
- (float)outline2010Width;
- (id)outlineColor;
- (short)position;
- (id)reflection;
- (void)removeEmptyFormattingChanges:(id)arg1;
- (int)resolveMode;
- (int)reverseBooleanProperty:(int)arg1;
- (int)rightToLeft;
- (void)setBaseStyle:(id)arg1;
- (void)setBold:(int)arg1;
- (void)setBoldForBiText:(int)arg1;
- (void)setBracketTwoLinesInOne:(int)arg1;
- (void)setCaps:(int)arg1;
- (void)setCharPositionOfPictureBulletInBookmark:(int)arg1;
- (void)setColor:(id)arg1;
- (void)setColorAuto:(BOOL)arg1;
- (void)setCompressHorizontalInVertical:(BOOL)arg1;
- (void)setDeleted:(int)arg1;
- (void)setDeletionDate:(id)arg1;
- (void)setDoubleStrikeThrough:(int)arg1;
- (void)setEditDate:(id)arg1;
- (void)setEdited:(int)arg1;
- (void)setEmbeddedObject:(BOOL)arg1;
- (void)setEmbossed:(int)arg1;
- (void)setEmphasisMark:(int)arg1;
- (void)setExtendedFont:(id)arg1;
- (void)setFarEastFont:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setFont:(id)arg1 forFontType:(int)arg2;
- (void)setFontHint:(int)arg1;
- (void)setFontSize:(unsigned short)arg1;
- (void)setFontSizeForBiText:(unsigned short)arg1;
- (void)setFormattingChanged:(int)arg1;
- (void)setHidden:(int)arg1;
- (void)setHighlight:(BOOL)arg1;
- (void)setHighlightColor:(int)arg1;
- (void)setHorizontalInVertical:(BOOL)arg1;
- (void)setImprint:(int)arg1;
- (void)setIndexToAuthorIDOfDeletion:(unsigned short)arg1;
- (void)setIndexToAuthorIDOfEdit:(unsigned short)arg1;
- (void)setIndexToAuthorIDOfFormattingChange:(unsigned short)arg1;
- (void)setItalic:(int)arg1;
- (void)setItalicForBiText:(int)arg1;
- (void)setKerning:(unsigned short)arg1;
- (void)setLanguageForBiText:(int)arg1;
- (void)setLanguageForDefaultText:(int)arg1;
- (void)setLanguageForFarEast:(int)arg1;
- (void)setLigature:(int)arg1;
- (void)setListCharacterPictureBullet:(BOOL)arg1;
- (void)setLowerCase:(BOOL)arg1;
- (void)setObjectIDForOle2:(int)arg1;
- (void)setOffsetToPictureData:(int)arg1;
- (void)setOle2:(BOOL)arg1;
- (void)setOutline2010Width:(float)arg1;
- (void)setOutline:(int)arg1;
- (void)setOutlineColor:(id)arg1;
- (void)setPosition:(short)arg1;
- (void)setReflection:(id)arg1;
- (void)setResolveMode:(int)arg1;
- (void)setRightToLeft:(int)arg1;
- (void)setShadow2010:(id)arg1;
- (void)setShadow2010Opacity:(float)arg1;
- (void)setShadow:(int)arg1;
- (void)setSmallCaps:(int)arg1;
- (void)setSpacing:(short)arg1;
- (void)setSpecialCharacter:(BOOL)arg1;
- (void)setStrikeThrough:(int)arg1;
- (void)setSymbolCharacter:(unsigned short)arg1;
- (void)setSymbolFont:(id)arg1;
- (void)setTextScale:(unsigned short)arg1;
- (void)setTwoLinesInOne:(BOOL)arg1;
- (void)setUnderline:(int)arg1;
- (void)setUnderlineColor:(id)arg1;
- (void)setUseCsFont:(int)arg1;
- (void)setVerticalAlign:(int)arg1;
- (id)shading;
- (int)shadow;
- (id)shadow2010;
- (float)shadow2010Opacity;
- (int)smallCaps;
- (short)spacing;
- (int)strikeThrough;
- (unsigned short)symbolCharacter;
- (id)symbolFont;
- (unsigned short)textScale;
- (BOOL)twoLinesInOne;
- (int)underline;
- (id)underlineColor;
- (int)useCsFont;
- (int)verticalAlign;

@end
