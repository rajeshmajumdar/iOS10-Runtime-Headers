/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMediaEntityCache : NSObject {
    struct __CFDictionary { } * _concreteEntitiesByDataProviderEntityClass;
    NSMutableArray * _entityTemporaryReferences;
    <MPMediaLibraryDataProviderPrivate> * _mediaLibraryDataProvider;
    BOOL  _mediaLibraryDataProviderRespondsToSupportsEntityChangeTrackingMethod;
    NSObject<OS_dispatch_queue> * _queue;
    struct _opaque_pthread_rwlock_t { 
        long __sig; 
        BOOL __opaque[124]; 
    }  _rwlock;
}

- (void).cxx_destruct;
- (void)_clearSomeGlobalEntityTemporaryReferences;
- (struct map<long long, MPMediaEntity<MPCacheableConcreteMediaEntity> *__weak, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, MPMediaEntity<MPCacheableConcreteMediaEntity> *__weak> > > { struct __tree<std::__1::__value_type<long long, MPMediaEntity<MPCacheableConcreteMediaEntity> *__weak>, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, MPMediaEntity<MPCacheableConcreteMediaEntity> *__weak>, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, MPMediaEntity<MPCacheableConcreteMediaEntity> *__weak> > > { struct __tree_node<std::__1::__value_type<long long, MPMediaEntity<MPCacheableConcreteMediaEntity> *__weak>, void *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long long, MPMediaEntity<MPCacheableConcreteMediaEntity> *__weak>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, MPMediaEntity<MPCacheableConcreteMediaEntity> *__weak>, std::__1::less<long long>, true> > { unsigned long x_3_2_1; } x_1_1_3; } x1; }*)_entityMapForDataProviderEntityClass:(Class)arg1;
- (id)_entityWithIdentifier:(long long)arg1 mediaEntityType:(int)arg2 collectionGroupingType:(int)arg3 loadEntityBlock:(id /* block */)arg4;
- (void)_performWithExclusiveAccess:(id /* block */)arg1;
- (void)_performWithSharedAccess:(id /* block */)arg1;
- (id)collectionWithIdentifier:(long long)arg1 grouping:(int)arg2 loadEntityBlock:(id /* block */)arg3;
- (id)init;
- (id)initWithMediaLibraryDataProvider:(id)arg1;
- (id)itemWithIdentifier:(long long)arg1;
- (id)itemWithIdentifier:(long long)arg1 loadEntityBlock:(id /* block */)arg2;
- (void)removeEntityWithIdentifier:(long long)arg1 dataProviderEntityClass:(Class)arg2;
- (void)updatePropertyValuesInEntityWithIdentifier:(long long)arg1 dataProviderEntityClass:(Class)arg2 deleted:(BOOL)arg3;

@end
