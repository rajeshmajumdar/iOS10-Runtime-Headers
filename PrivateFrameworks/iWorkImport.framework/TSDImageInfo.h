/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDImageInfo : TSDMediaInfo <TSDContainerInfo, TSDMixing, TSDReducableInfo, TSKTransformableObject, TSSPresetSource> {
    TSPData * mAdjustedImageData;
    BOOL  mCurrentlyInDocument;
    TSPData * mEnhancedImageData;
    TSDImageAdjustments * mImageAdjustments;
    TSPData * mImageData;
    TSUBezierPath * mInstantAlphaPath;
    BOOL  mInterpretsUntaggedImageDataAsGeneric;
    TSDMaskInfo * mMaskInfo;
    struct CGSize { 
        float width; 
        float height; 
    }  mNaturalSize;
    TSPData * mOriginalImageData;
    TSDMediaStyle * mStyle;
    TSPData * mThumbnailAdjustedImageData;
    TSPData * mThumbnailImageData;
    TSUBezierPath * mTracedPath;
}

@property (nonatomic, retain) TSPData *adjustedImageData;
@property (getter=isAnchoredToText, nonatomic, readonly) BOOL anchoredToText;
@property (getter=isAttachedToBodyText, nonatomic, readonly) BOOL attachedToBodyText;
@property (nonatomic, readonly) BOOL canPasteAsPDF;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) TSPData *enhancedImageData;
@property (getter=isFloatingAboveText, nonatomic, readonly) BOOL floatingAboveText;
@property (nonatomic, copy) TSDInfoGeometry *geometry;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) TSDImageAdjustments *imageAdjustments;
@property (nonatomic, retain) TSPData *imageData;
@property (nonatomic, readonly) TSDMediaStyle *imageStyle;
@property (getter=isInlineWithText, nonatomic, readonly) BOOL inlineWithText;
@property (nonatomic, retain) TSUBezierPath *instantAlphaPath;
@property (nonatomic) BOOL interpretsUntaggedImageDataAsGeneric;
@property (nonatomic, retain) TSDMaskInfo *maskInfo;
@property (nonatomic) BOOL matchesObjectPlaceholderGeometry;
@property (nonatomic) struct CGSize { float x1; float x2; } naturalSize;
@property (nonatomic, retain) TSPData *originalImageData;
@property (nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment;
@property (nonatomic, readonly) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
@property (nonatomic) NSObject<TSDContainerInfo> *parentInfo;
@property (readonly) Class superclass;
@property (nonatomic, retain) TSPData *thumbnailAdjustedImageData;
@property (nonatomic, retain) TSPData *thumbnailImageData;
@property (nonatomic, readonly) TSUBezierPath *tracedPath;

+ (void)adjustIncomingImageGeometry:(id)arg1 maskGeometry:(id)arg2 forImageData:(id)arg3 maskedWithInstantAlphaPath:(id)arg4 withNaturalSize:(struct CGSize { float x1; float x2; })arg5 forTargetImageGeometry:(id)arg6 withTargetMaskGeometry:(id)arg7;
+ (void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(int)arg3;
+ (void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(int)arg3 reservedCount:(unsigned int)arg4;
+ (id)bootstrapPropertyMapForPresetIndex:(unsigned int)arg1 inTheme:(id)arg2 alternate:(int)arg3;
+ (id)i_thumbnailForImageData:(id)arg1;
+ (id)p_resampleAndConvertImageDataToSRGB:(id)arg1 resampled:(BOOL*)arg2 alreadyInDocument:(BOOL)arg3;
+ (id)presetKinds;

- (void)acceptVisitor:(id)arg1;
- (id)adjustedImageData;
- (BOOL)canPasteAsPDF;
- (struct CGPoint { float x1; float x2; })centerForReplacingWithNewMedia;
- (id)childInfos;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })computeFullTransform;
- (id)copyWithContext:(id)arg1;
- (id)copyWithContext:(id)arg1 style:(id)arg2;
- (void)dealloc;
- (id)defaultMaskInfo;
- (id)defaultMaskInfoWithContext:(id)arg1;
- (struct CGSize { float x1; float x2; })defaultOriginalSize;
- (id)enhancedImageData;
- (id)geometry;
- (id)geometryWithMask;
- (void)i_setAdjustedImageData:(id)arg1 thumbnailData:(id)arg2;
- (void)i_setImageData:(id)arg1 thumbnailData:(id)arg2;
- (id)imageAdjustments;
- (id)imageData;
- (id)imageDatasForReducingFileSizeWithAssociatedHints;
- (id)imageStyle;
- (id)infoForSelectionPath:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1 geometry:(id)arg2;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 imageData:(id)arg4 originalImageData:(id)arg5;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 imageData:(id)arg4 thumbnailImageData:(id)arg5 originalImageData:(id)arg6 imageAdjustments:(id)arg7 adjustedImageData:(id)arg8 thumbnailAdjustedImageData:(id)arg9;
- (id)instantAlphaPath;
- (BOOL)interpretsUntaggedImageDataAsGeneric;
- (BOOL)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg1;
- (BOOL)isMasked;
- (BOOL)isPDF;
- (Class)layoutClass;
- (void)loadFromArchive:(const struct ImageArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct DrawableArchive {} *x5; struct DataReference {} *x6; struct Reference {} *x7; struct Size {} *x8; struct Reference {} *x9; struct DataReference {} *x10; struct DataReference {} *x11; struct Size {} *x12; struct Path {} *x13; struct ImageAdjustmentsArchive {} *x14; unsigned int x15; bool x16; struct DataReference {} *x17; struct DataReference {} *x18; struct DataReference {} *x19; struct Reference {} *x20; struct Reference {} *x21; struct Reference {} *x22; struct Path {} *x23; }*)arg1 unarchiver:(id)arg2;
- (id)localizedChunkNameForTextureDeliveryStyle:(unsigned int)arg1 animationFilter:(id)arg2 chunkIndex:(unsigned int)arg3;
- (BOOL)maskCanBeReset;
- (id)maskInfo;
- (id)mediaDisplayName;
- (id)mediaFileType;
- (id)mixedObjectWithFraction:(float)arg1 ofObject:(id)arg2;
- (int)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (struct CGSize { float x1; float x2; })naturalSize;
- (id)objectForProperty:(int)arg1;
- (id)originalImageData;
- (struct CGSize { float x1; float x2; })originalSize;
- (void)p_upgradeImageGeometry;
- (void)p_upgradeImageThumbnail;
- (id)parentInfo;
- (id)presetKind;
- (id)propertyNameForFlagsCommand;
- (id)propertyNameForOriginalSizeCommand;
- (struct CGSize { float x1; float x2; })rawDataSize;
- (Class)repClass;
- (void)saveToArchive:(struct ImageArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct DrawableArchive {} *x5; struct DataReference {} *x6; struct Reference {} *x7; struct Size {} *x8; struct Reference {} *x9; struct DataReference {} *x10; struct DataReference {} *x11; struct Size {} *x12; struct Path {} *x13; struct ImageAdjustmentsArchive {} *x14; unsigned int x15; bool x16; struct DataReference {} *x17; struct DataReference {} *x18; struct DataReference {} *x19; struct Reference {} *x20; struct Reference {} *x21; struct Reference {} *x22; struct Path {} *x23; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)setAdjustedImageData:(id)arg1;
- (void)setEnhancedImageData:(id)arg1;
- (void)setExteriorTextWrap:(id)arg1;
- (void)setImageAdjustments:(id)arg1;
- (void)setImageData:(id)arg1;
- (void)setInstantAlphaPath:(id)arg1;
- (void)setInterpretsUntaggedImageDataAsGeneric:(BOOL)arg1;
- (void)setMaskInfo:(id)arg1;
- (void)setNaturalSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setOriginalImageData:(id)arg1;
- (void)setParentInfo:(id)arg1;
- (void)setStyle:(id)arg1;
- (void)setThumbnailAdjustedImageData:(id)arg1;
- (void)setThumbnailImageData:(id)arg1;
- (id)style;
- (Class)styleClass;
- (id)styleIdentifierTemplateForNewPreset;
- (id)subclassInitFromUnarchiver:(id)arg1;
- (struct CGSize { float x1; float x2; })targetSizeForImageData:(id)arg1 associatedHint:(id)arg2;
- (id)thumbnailAdjustedImageData;
- (id)thumbnailImageData;
- (id)tracedPath;
- (void)updateGeometryToReplaceMediaInfo:(id)arg1;
- (id)updatedMaskInfoGeometryForImageDraggedBy:(struct CGPoint { float x1; float x2; })arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;

@end
