/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTRemoteGizmoClient : BLTRemoteObject <BLTGizmoClient> {
    <BLTCompanionServer> * _server;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) <BLTCompanionServer> *server;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addBulletin:(id)arg1 playLightsAndSirens:(BOOL)arg2;
- (void)addBulletin:(id)arg1 playLightsAndSirens:(BOOL)arg2 updateType:(unsigned int)arg3 transmissionDate:(id)arg4 receptionDate:(id)arg5;
- (void)addBulletin:(id)arg1 playLightsAndSirens:(BOOL)arg2 updateType:(unsigned int)arg3 withTimeout:(id)arg4 completion:(id /* block */)arg5;
- (void)addBulletinSummary:(id)arg1;
- (void)cancelBulletinWithPublisherMatchID:(id)arg1 universalSectionID:(id)arg2 feed:(unsigned int)arg3;
- (void)cancelBulletinWithPublisherMatchID:(id)arg1 universalSectionID:(id)arg2 feed:(unsigned int)arg3 transmissionDate:(id)arg4 receptionDate:(id)arg5;
- (void)handleAcknowledgeActionRequest:(id)arg1;
- (void)handleDidPlayLightsAndSirensReply:(id)arg1;
- (void)handleDismissActionRequest:(id)arg1;
- (void)handleHandlePairedDeviceIdentifierRequest:(id)arg1;
- (void)handlePairedDeviceIdentifier:(id)arg1;
- (void)handleRemoveBulletinRequest:(id)arg1;
- (void)handleSnoozeActionRequest:(id)arg1;
- (void)handleSupplementaryActionRequest:(id)arg1;
- (id)init;
- (void)registerProtobufHandlers;
- (void)removeBulletinWithPublisherBulletinID:(id)arg1 recordID:(id)arg2 sectionID:(id)arg3;
- (id)server;
- (void)setServer:(id)arg1;
- (void)updateBulletinList:(id)arg1;

@end
