/* Generated by RuntimeBrowser.
 */

@protocol MFLibrarySearchableIndexDataSource <NSObject>

@required

- (NSArray *)itemsRequiringIndexingForSearchableIndex:(MFLibrarySearchableIndex *)arg1 limit:(unsigned int)arg2;
- (void)searchableIndex:(MFLibrarySearchableIndex *)arg1 assignTransaction:(long long)arg2 forIdentifiers:(NSArray *)arg3;
- (void)searchableIndex:(MFLibrarySearchableIndex *)arg1 invalidateItemsGreaterThanTransaction:(long long)arg2;

@end
