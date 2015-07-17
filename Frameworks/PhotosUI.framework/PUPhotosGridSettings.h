/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotosGridSettings : PUSettings {
    BOOL  _badgeAllItemsAsVideos;
    float  _defaultItemSideSize;
    BOOL  _displayAllItemsAsBursts;
    BOOL  _flashDegradedImages;
    BOOL  _forceJPEGThumbnailsInDefaultGrid;
    float  _maximumSpacing;
    float  _minimumSpacing;
    int  _numberColumnsInDefaultGrid;
    int  _numberOfColumnsInWideGrid;
    float  _sideMargins;
    BOOL  _swipeSelectionEnabled;
    BOOL  _useFloatingHeaders;
}

@property (nonatomic) BOOL badgeAllItemsAsVideos;
@property (nonatomic) float defaultItemSideSize;
@property (nonatomic) BOOL displayAllItemsAsBursts;
@property (nonatomic) BOOL flashDegradedImages;
@property (nonatomic) BOOL forceJPEGThumbnailsInDefaultGrid;
@property (nonatomic) float maximumSpacing;
@property (nonatomic) float minimumSpacing;
@property (nonatomic) int numberColumnsInDefaultGrid;
@property (nonatomic) int numberOfColumnsInWideGrid;
@property (nonatomic) float sideMargins;
@property (getter=isSwipeSelectionEnabled, nonatomic) BOOL swipeSelectionEnabled;
@property (nonatomic) BOOL useFloatingHeaders;

+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (BOOL)badgeAllItemsAsVideos;
- (float)defaultItemSideSize;
- (BOOL)displayAllItemsAsBursts;
- (BOOL)flashDegradedImages;
- (BOOL)forceJPEGThumbnailsInDefaultGrid;
- (BOOL)isSwipeSelectionEnabled;
- (float)maximumSpacing;
- (float)minimumSpacing;
- (int)numberColumnsInDefaultGrid;
- (int)numberOfColumnsInWideGrid;
- (void)setBadgeAllItemsAsVideos:(BOOL)arg1;
- (void)setDefaultItemSideSize:(float)arg1;
- (void)setDefaultValues;
- (void)setDisplayAllItemsAsBursts:(BOOL)arg1;
- (void)setFlashDegradedImages:(BOOL)arg1;
- (void)setForceJPEGThumbnailsInDefaultGrid:(BOOL)arg1;
- (void)setMaximumSpacing:(float)arg1;
- (void)setMinimumSpacing:(float)arg1;
- (void)setNumberColumnsInDefaultGrid:(int)arg1;
- (void)setNumberOfColumnsInWideGrid:(int)arg1;
- (void)setSideMargins:(float)arg1;
- (void)setSwipeSelectionEnabled:(BOOL)arg1;
- (void)setUseFloatingHeaders:(BOOL)arg1;
- (float)sideMargins;
- (BOOL)useFloatingHeaders;

@end
