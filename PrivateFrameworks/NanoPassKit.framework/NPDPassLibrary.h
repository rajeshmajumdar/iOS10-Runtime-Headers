/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPDPassLibrary : NSObject <PDXPCServiceExportedInterface> {
    NSXPCConnection * _connection;
    NPKPassLibraryFilter * _filter;
    NSObject<OS_dispatch_queue> * _queue;
    BOOL  _serviceActive;
}

@property (retain) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NPKPassLibraryFilter *filter;
@property (readonly) unsigned int hash;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property BOOL serviceActive;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)broadcastPassAdded:(id)arg1;
- (void)broadcastPassRemoved:(id)arg1;
- (void)broadcastPassUpdated:(id)arg1;
- (id)connection;
- (id)filter;
- (id)initWithConnection:(id)arg1;
- (id)queue;
- (BOOL)serviceActive;
- (void)serviceResumed;
- (void)serviceSuspended;
- (void)setConnection:(id)arg1;
- (void)setFilter:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setServiceActive:(BOOL)arg1;

@end