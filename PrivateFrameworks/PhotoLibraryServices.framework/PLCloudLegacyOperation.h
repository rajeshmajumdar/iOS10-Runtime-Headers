/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudLegacyOperation : NSObject {
    PLCloudPhotoLibraryManager * _connection;
    unsigned int  _cost;
    long  _createdAt;
    PLCloudLegacyOperationResource * _operationResource;
    BOOL  _running;
    PLCloudLegacyScenario * _scenario;
}

@property (nonatomic, readonly) PLCloudPhotoLibraryManager *connection;
@property (nonatomic, readonly) unsigned int cost;
@property (nonatomic, readonly) long createdAt;
@property (nonatomic, retain) PLCloudLegacyOperationResource *operationResource;
@property BOOL running;
@property (nonatomic, readonly) PLCloudLegacyScenario *scenario;

- (id)connection;
- (unsigned int)cost;
- (long)createdAt;
- (void)dealloc;
- (unsigned int)hash;
- (id)initWithScenario:(id)arg1 cloudConnection:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)operationResource;
- (void)requestCancel;
- (id)resource;
- (void)runOperationWithCompletionHandler:(id /* block */)arg1;
- (BOOL)running;
- (id)scenario;
- (void)setOperationResource:(id)arg1;
- (void)setRunning:(BOOL)arg1;

@end
