/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudBudgetService : PLCloudService {
    unsigned long long  _lastCacheDeleteRequestBytes;
    long  _lastCacheDeleteRequestTime;
}

- (void)activate;
- (unsigned long long)availableBudget;
- (void)cacheDelete:(id)arg1;
- (id)messageWithCurrentState;
- (void)publishUpdatedBudget;

@end
