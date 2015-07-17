/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKTransitDeparturesSectionController : NSObject {
    NSDate * _departureCutoffDate;
    NSString * _direction;
    NSDate * _expiredHighFrequencyCutoffDate;
    unsigned int  _filteredFlags;
    BOOL  _limitNumCellsOnly;
    NSSet * _linesToExclude;
    MKMapItem * _mapItem;
    BOOL  _needsBuildRows;
    unsigned int  _numberOfRows;
    MKTransitDeparturesPagingFilter * _pagingFilter;
    NSArray * _sequences;
    NSMapTable * _sequencesToInclude;
    <GEOTransitSystem> * _system;
}

@property (nonatomic, retain) NSDate *departureCutoffDate;
@property (nonatomic, retain) NSDate *expiredHighFrequencyCutoffDate;
@property (nonatomic, retain) NSSet *linesToExclude;
@property (nonatomic, readonly) BOOL showOperatingHours;
@property (nonatomic, retain) <GEOTransitSystem> *system;

- (void).cxx_destruct;
- (void)_buildRows;
- (BOOL)_needsBuildRows;
- (void)_setNeedsBuildRows;
- (id)departureCutoffDate;
- (id)expiredHighFrequencyCutoffDate;
- (BOOL)hasFilteredLines;
- (BOOL)hasFilteredRows;
- (void)incrementPagingFilter;
- (id)init;
- (id)initWithMapItem:(id)arg1 system:(id)arg2 direction:(id)arg3 limitNumCellsOnly:(BOOL)arg4;
- (id)linesToExclude;
- (unsigned int)numberOfRows;
- (id)sequenceForRow:(int)arg1 outDepartureIndex:(unsigned int*)arg2 outIsNewLine:(out BOOL*)arg3 outNextLineIsSame:(out BOOL*)arg4;
- (id)sequences;
- (void)setDepartureCutoffDate:(id)arg1;
- (void)setExpiredHighFrequencyCutoffDate:(id)arg1;
- (void)setLinesToExclude:(id)arg1;
- (void)setSystem:(id)arg1;
- (BOOL)showOperatingHours;
- (id)system;

@end
