/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICAttachmentModel : NSObject <QLPreviewItem> {
    ICAttachment * _attachment;
    BOOL  _generatingPreviews;
    BOOL  _hasAdditionalSearchIndexStrings;
    struct CGSize { 
        float width; 
        float height; 
    }  _intrinsicContentSize;
    BOOL  _mergeableDataDirty;
    BOOL  _previewGenerationOperationCancelled;
    NSArray * _searchStrings;
}

@property (nonatomic, readonly) ICAttachment *attachment;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) BOOL generateAsynchronousPreviews;
@property (getter=isGeneratingPreviews) BOOL generatingPreviews;
@property (nonatomic, readonly) id /* block */ genericBrickThumbnailCreator;
@property (nonatomic, readonly) id /* block */ genericListThumbnailCreator;
@property BOOL hasAdditionalSearchIndexStrings;
@property (nonatomic, readonly) BOOL hasPreviews;
@property (nonatomic, readonly) BOOL hasThumbnailImage;
@property (readonly) unsigned int hash;
@property (nonatomic) struct CGSize { float x1; float x2; } intrinsicContentSize;
@property (getter=isMergeableDataDirty, nonatomic) BOOL mergeableDataDirty;
@property (nonatomic, readonly) BOOL needToGeneratePreviews;
@property BOOL previewGenerationOperationCancelled;
@property (nonatomic, readonly) NSString *previewItemTitle;
@property (nonatomic, readonly) NSURL *previewItemURL;
@property (readonly, copy) NSArray *searchStrings;
@property (nonatomic, readonly) BOOL showThumbnailInNoteList;
@property (readonly) Class superclass;

+ (id)contentInfoTextWithAttachmentCount:(unsigned int)arg1;
+ (struct UIImage { Class x1; }*)fileIconForURL:(id)arg1 withPreferredSize:(struct CGSize { float x1; float x2; })arg2;

- (void).cxx_destruct;
- (id)activityItems;
- (id)attachment;
- (id)attachmentModelType;
- (void)didCancelPreviewGeneratorOperation;
- (struct UIImage { Class x1; }*)fileIconWithPreferredSize:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)generateAsynchronousPreviews;
- (void)generatePreviews;
- (id)generateSearchIndexStringsOperation;
- (id /* block */)genericBrickThumbnailCreator;
- (id /* block */)genericListThumbnailCreator;
- (BOOL)hasAdditionalSearchIndexStrings;
- (BOOL)hasPreviews;
- (BOOL)hasThumbnailImage;
- (id)initWithAttachment:(id)arg1;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (BOOL)isGeneratingPreviews;
- (BOOL)isMergeableDataDirty;
- (BOOL)isReadyToPresent;
- (void)mergeWithMergeableData:(id)arg1;
- (BOOL)needToGeneratePreviews;
- (int)populateSearchStrings:(id)arg1;
- (BOOL)previewGenerationOperationCancelled;
- (int)previewImageOrientation;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })previewImageOrientationTransform;
- (id)previewItemTitle;
- (id)previewItemURL;
- (id)searchStrings;
- (void)setGeneratingPreviews:(BOOL)arg1;
- (void)setHasAdditionalSearchIndexStrings:(BOOL)arg1;
- (void)setIntrinsicContentSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setMergeableDataDirty:(BOOL)arg1;
- (void)setPreviewGenerationOperationCancelled:(BOOL)arg1;
- (BOOL)showThumbnailInNoteList;
- (void)updateAttachmentSize;
- (void)updateFileBasedAttributes;
- (void)writeMergeableData;

@end
