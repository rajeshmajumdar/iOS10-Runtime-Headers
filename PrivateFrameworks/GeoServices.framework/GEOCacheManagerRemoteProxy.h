/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOCacheManagerRemoteProxy : NSObject <GEOCacheManaging> {
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void)_refreshMapItems:(id)arg1 updatedCoordinates:(id)arg2 xpcMessageName:(id)arg3 handler:(id /* block */)arg4;
- (void)checkHasExpiredWithInvalidationDatas:(id)arg1 handler:(id /* block */)arg2;
- (void)dealloc;
- (id)init;
- (int)invalidationStateForComponent:(id)arg1;
- (int)invalidationStateForPlace:(id)arg1;
- (void)refreshLOIAssociatedMapItems:(id)arg1 updatedCoordinates:(id)arg2 handler:(id /* block */)arg3;
- (void)refreshLOIReverseGeocodedMapItems:(id)arg1 updatedCoordinates:(id)arg2 handler:(id /* block */)arg3;
- (void)snapshotWithFilePathArray:(id)arg1 handler:(id /* block */)arg2;
- (void)versionsForDomains:(id)arg1 handler:(id /* block */)arg2;

@end
