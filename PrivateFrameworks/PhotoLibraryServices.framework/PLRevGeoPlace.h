/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLRevGeoPlace : NSObject {
    BOOL  _isHome;
    NSMutableArray * _placeTypeInfoMap;
}

@property (nonatomic) BOOL isHome;

+ (id /* block */)sortedAdditionalPlaceInfoComparator;

- (void)_addPlaceName:(id)arg1 placeInfo:(id)arg2 forOrderType:(unsigned int)arg3;
- (unsigned int)_dominantOrderTypeForPlaceType:(int)arg1 lastOrderType:(unsigned int)arg2;
- (void)_mergeGEOMapItem:(id)arg1;
- (id)_placeInfosForOrderType:(unsigned int)arg1 createIfNeeded:(BOOL)arg2;
- (void)_removePlacesInPlaceInfos:(id)arg1 fromOrderType:(unsigned int)arg2;
- (id)bestPlaceInfoForOrderType:(unsigned int)arg1;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithGEOMapItem:(id)arg1;
- (BOOL)isHome;
- (id)placeInfosForOrderType:(unsigned int)arg1;
- (void)setIsHome:(BOOL)arg1;

@end
