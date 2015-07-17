/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCiWorkPublishingOperation : _BRCOperation <BRCOperationSubclass> {
    BOOL  _forPublish;
    BRCItemID * _itemID;
    BOOL  _readonly;
    NSArray * _recordIDs;
    BRCServerZone * _serverZone;
    NSNumber * _sharingInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateItemAfterShareCompleted;
- (id)initWithDocumentItem:(id)arg1 forPublish:(BOOL)arg2 readonly:(BOOL)arg3;
- (void)main;
- (BOOL)shouldRetryForError:(id)arg1;
- (unsigned long long)startActivity;

@end
