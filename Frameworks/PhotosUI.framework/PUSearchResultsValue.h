/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUSearchResultsValue : NSObject <PUSearchResult> {
    id  _albumUUID;
    unsigned int  _approximateCount;
    NSAttributedString * _attributedDisplayTitle;
    <PUSearchResultsValueDelegate> * _delegate;
    NSString * _displaySubtitle;
    PSIGroupResult * _groupResult;
    NSObject<OS_dispatch_queue> * _queue;
    double  _score;
    NSArray * _uuids;
}

@property (retain) id albumUUID;
@property unsigned int approximateCount;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PUSearchResultsValueDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *displaySubtitle;
@property (readonly, copy) NSString *displayTitle;
@property (setter=_setGroupResult:, retain) PSIGroupResult *groupResult;
@property (readonly) unsigned int hash;
@property (readonly) double score;
@property (readonly, copy) NSString *searchString;
@property (readonly) Class superclass;
@property (retain) NSArray *uuids;

- (void).cxx_destruct;
- (void)_computeScoreWithMaxGroupedResultsCount:(unsigned int)arg1;
- (void)_setAlbumUUID:(id)arg1;
- (void)_setApproximateCount:(unsigned int)arg1;
- (void)_setGroupResult:(id)arg1;
- (void)_setUUIDs:(id)arg1;
- (id)albumUUID;
- (unsigned int)approximateCount;
- (int)compare:(id)arg1;
- (id)delegate;
- (id)displaySubtitle;
- (id)displayTitle;
- (id)displayTitleWithDefaultAttributes:(id)arg1 highlightedAttributes:(id)arg2;
- (void)fetchRemainingUUIDs:(id /* block */)arg1;
- (id)groupResult;
- (id)init;
- (BOOL)isFinished;
- (double)score;
- (id)searchString;
- (void)setDelegate:(id)arg1;
- (id)uuids;

@end
