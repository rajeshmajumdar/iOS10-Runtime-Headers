/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicLibrarySearchResultsEntityProviderConfiguration : MusicLibraryBrowseHeterogenousCollectionViewConfiguration {
    NSMutableDictionary * _contentDescriptorsForSectionAndTraitCollections;
    MusicLibrarySearchResultsEntityProvider * _entityValueProvider;
}

@property (nonatomic, readonly) MusicLibrarySearchResultsEntityProvider *entityProvider;

+ (id)_defaultLibraryViewConfigurations;
+ (id)_mediaPickerConfigurationsIncludingPlaylists:(BOOL)arg1 allowingMultipleSelection:(BOOL)arg2;
+ (id)defaultConfiguration;
+ (id)mediaPickerConfigurationIncludingPlaylists:(BOOL)arg1 allowingMultipleSelection:(BOOL)arg2;

- (void).cxx_destruct;
- (void)_applyTableViewMetricsToContentDescriptor:(id)arg1;
- (id)_collectionViewDescriptorForEntityViewDescriptor:(id)arg1;
- (id)collectionViewDescriptorForSection:(unsigned int)arg1 traitCollection:(id)arg2;
- (id)entityProvider;
- (id)initWithLibraryViewConfigurations:(id)arg1;
- (id)loadEntityViewDescriptor;

@end
