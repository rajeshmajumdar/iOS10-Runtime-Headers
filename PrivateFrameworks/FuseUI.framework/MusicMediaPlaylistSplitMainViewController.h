/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicMediaPlaylistSplitMainViewController : MusicMediaProductSplitMainViewController <MusicMediaPickerDelegate> {
    NSString * _curatorStoreID;
    MusicProductDescription * _editedPlaylistDescription;
    NSNumber * _editedPlaylistPublicState;
    NSNumber * _editedPlaylistVisibleState;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_applyDeleteChangeRecord:(id)arg1 toPlaylist:(id)arg2;
- (BOOL)_applyInsertChangeRecords:(id)arg1 toPlaylist:(id)arg2;
- (BOOL)_applyMoveChangeRecord:(id)arg1 toPlaylist:(id)arg2;
- (void)_commitEditingWithTracklistEntityProviderChangeRecords:(id)arg1;
- (void)_configureProductAdditionalMetadataViewController:(id)arg1;
- (BOOL)_isCuratorPlaylist;
- (id)_loadProductTracklistTableViewConfigurationWithTracklistEntityProvider:(id)arg1;
- (void)_resetAdditionalMetadataViewController:(id)arg1;
- (void)_setEditedValue:(id)arg1 forProperty:(id)arg2 onPlaylist:(id)arg3 withSuccessfullyEditedPropertiesAccumulatorDictionary:(id)arg4;
- (void)_updateEditableComponents;
- (id)initWithContainerEntityProvider:(id)arg1 tracklistEntityProvider:(id)arg2 clientContext:(id)arg3 presentationSource:(int)arg4 forContentCreation:(BOOL)arg5;
- (id)initWithContainerEntityProvider:(id)arg1 tracklistEntityProvider:(id)arg2 clientContext:(id)arg3 presentationSource:(int)arg4 forContentCreation:(BOOL)arg5 curatorStoreID:(id)arg6;
- (void)mediaPickerNavigationController:(id)arg1 didFinishWithSelectedEntities:(id)arg2;
- (void)productAdditionalMetadataViewControllerDidSelectAddSongsButton:(id)arg1;
- (void)productAdditionalMetadataViewControllerDidUpdateProductDescription:(id)arg1;
- (void)productAdditionalMetadataViewControllerDidUpdatePublicSwitchState:(id)arg1;
- (void)productAdditionalMetadataViewControllerDidUpdateVisibleSwitchState:(id)arg1;
- (BOOL)productAdditionalMetadataViewControllerShouldDeferContentHeightAnimationUpdates:(id)arg1;
- (void)setEditedContentArtworkImage:(id)arg1;
- (void)setEditedContentTitle:(id)arg1;

@end
