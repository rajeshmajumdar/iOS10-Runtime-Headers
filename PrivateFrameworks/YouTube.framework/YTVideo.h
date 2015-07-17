/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
 */

@interface YTVideo : NSObject {
    NSString * _author;
    int  _batchStatus;
    NSMutableArray * _captions;
    NSURL * _captionsURL;
    NSString * _category;
    NSURL * _commentsURL;
    NSCalendarDate * _dateAdded;
    NSCalendarDate * _dateUpdated;
    NSURL * _editURL;
    NSString * _id;
    NSURL * _infoURL;
    BOOL  _isProcessing;
    NSString * _notificationName;
    unsigned int  _numDislikes;
    unsigned int  _numLikes;
    unsigned int  _numberOfViews;
    int  _privacy;
    NSURL * _ratingsURL;
    NSString * _restrictedCountries;
    NSString * _shortID;
    NSArray * _tags;
    id /* block */  _thumbnailProxyBlock;
    NSURL * _thumbnailURL;
    NSString * _title;
    NSString * _unplayable;
    NSString * _videoDescription;
    NSArray * _videoReferences;
}

+ (void)disableNotifications;
+ (void)enableNotifications;
+ (void)playbackDidStall;
+ (void)reset3GPlaybackStallCount;
+ (id)unsupportedVideoError;
+ (id)videoIsProcessingError;
+ (id)videoNotFoundError;

- (id)ID;
- (void)_postVideoDidChange;
- (void)_thumbnailDidLoad;
- (double)age;
- (BOOL)allowsHighQuality3GPlayback;
- (id)anyVideoReference;
- (id)archiveDictionary;
- (id)author;
- (int)batchStatus;
- (id)bestVideoReference;
- (id)captions;
- (id)captionsURL;
- (void)carrierBundleDidChangeNotification:(id)arg1;
- (id)category;
- (id)commentsURL;
- (id)dateAdded;
- (id)dateAddedString;
- (id)dateUpdated;
- (void)dealloc;
- (id)description;
- (id)editURL;
- (unsigned int)hash;
- (id)infoURL;
- (id)initFromArchiveDictionary:(id)arg1;
- (id)initWithID:(id)arg1 title:(id)arg2 dateUpdated:(id)arg3 dateAdded:(id)arg4 videoReferences:(id)arg5 infoURL:(id)arg6 videoDescription:(id)arg7 category:(id)arg8 tags:(id)arg9 author:(id)arg10 thumbnailURL:(id)arg11 numLikes:(unsigned int)arg12 numDislikes:(unsigned int)arg13 numberOfViews:(unsigned int)arg14 batchStatus:(int)arg15 commentsURL:(id)arg16 editURL:(id)arg17 ratingsURL:(id)arg18 captionsURL:(id)arg19 shortID:(id)arg20 unplayable:(id)arg21 isProcessing:(BOOL)arg22 privacy:(int)arg23 restrictedCountries:(id)arg24;
- (BOOL)isBookmarked;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isPlayable;
- (BOOL)isProcessing;
- (struct CGImage { }*)largeThumbnailLoadIfAbsent:(BOOL)arg1;
- (void)loadThumbnailWithCallback:(id /* block */)arg1;
- (unsigned int)numDislikes;
- (unsigned int)numLikes;
- (unsigned int)numberOfViews;
- (BOOL)ownVideo;
- (struct CGImage { }*)pluginThumbnailLoadIfAbsent:(BOOL)arg1;
- (BOOL)positiveRating;
- (id)privacyString;
- (id)ratingPercentageString;
- (id)ratingsURL;
- (id)restrictedCountries;
- (struct CGImage { }*)roundedThumbnailLoadIfAbsent:(BOOL)arg1;
- (id)shortID;
- (id)tags;
- (id)tagsString;
- (struct CGImage { }*)thumbnailLoadIfAbsent:(BOOL)arg1;
- (id)thumbnailURL;
- (id)title;
- (id)unplayable;
- (id)videoDescription;
- (id)videoReferenceForProfile:(int)arg1;

@end
