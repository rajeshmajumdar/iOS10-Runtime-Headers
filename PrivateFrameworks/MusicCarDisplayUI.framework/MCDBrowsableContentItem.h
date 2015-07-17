/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

@interface MCDBrowsableContentItem : NSObject {
    struct _MRContentItem { } * _contentItem;
    NSIndexPath * _indexPath;
}

@property (nonatomic, readonly) NSData *artworkData;
@property (nonatomic) struct _MRContentItem { }*contentItem;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, retain) NSIndexPath *indexPath;
@property (nonatomic, readonly) BOOL isContainer;
@property (nonatomic, readonly) BOOL isPlayable;
@property (nonatomic, readonly) float playbackProgress;
@property (nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (id)artworkData;
- (struct _MRContentItem { }*)contentItem;
- (void)dealloc;
- (id)identifier;
- (id)indexPath;
- (id)initWithMRContentItem:(struct _MRContentItem { }*)arg1;
- (BOOL)isContainer;
- (BOOL)isPlayable;
- (float)playbackProgress;
- (void)setContentItem:(struct _MRContentItem { }*)arg1;
- (void)setIndexPath:(id)arg1;
- (id)subtitle;
- (id)title;

@end
