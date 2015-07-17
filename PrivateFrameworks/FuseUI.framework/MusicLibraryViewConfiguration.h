/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicLibraryViewConfiguration : NSObject {
    MusicEntityViewDescriptor * _entityViewDescriptor;
    NSString * _iconName;
    NSString * _identifier;
    BOOL  _supportsSplitView;
    NSString * _title;
    NSArray * _userActivityItemTypes;
    Class  _viewControllerClass;
    BOOL  _wantsImmediateHandlingOfEditingChangeRecords;
}

@property (nonatomic, readonly) MusicEntityViewDescriptor *entityViewDescriptor;
@property (nonatomic, copy) NSString *iconName;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) BOOL supportsSplitView;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSArray *userActivityItemTypes;
@property (nonatomic, retain) Class viewControllerClass;
@property (nonatomic) BOOL wantsImmediateHandlingOfEditingChangeRecords;
@property (nonatomic, readonly) BOOL wantsVisualIndicationOfSelection;

- (void).cxx_destruct;
- (void)applyEntityProviderChangeRecords:(id)arg1;
- (BOOL)canDeleteEntityValueContext:(id)arg1;
- (BOOL)canMoveEntityValueContext:(id)arg1;
- (void)configureContentDescriptorForSearchResults:(id)arg1;
- (id)entityViewDescriptor;
- (void)enumerateContentViewConfigurationsUsingBlock:(id /* block */)arg1;
- (int)handleSelectionFromUserActivityContext:(id)arg1 containerItem:(id)arg2 entityValueContext:(id)arg3 viewController:(id)arg4;
- (void)handleSelectionOfAddButtonForEntityValueProvider:(id)arg1 inEntityProvider:(id)arg2 fromViewController:(id)arg3;
- (int)handleSelectionOfEntityValueContext:(id)arg1 fromViewController:(id)arg2;
- (id)iconName;
- (id)identifier;
- (BOOL)isEntityViewDescriptorLoaded;
- (id)loadEntityViewDescriptor;
- (id)newEntityValueContext;
- (id)newSectionEntityValueContext;
- (id)newSelectionEntityValueContext;
- (id)newSelectionSectionEntityValueContext;
- (id)newViewController;
- (void)setIconName:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setSupportsSplitView:(BOOL)arg1;
- (void)setTitle:(id)arg1;
- (void)setUserActivityItemTypes:(id)arg1;
- (void)setViewControllerClass:(Class)arg1;
- (void)setWantsImmediateHandlingOfEditingChangeRecords:(BOOL)arg1;
- (BOOL)supportsSplitView;
- (id)title;
- (id)userActivityItemTypes;
- (Class)viewControllerClass;
- (BOOL)wantsImmediateHandlingOfEditingChangeRecords;
- (BOOL)wantsVisualIndicationOfSelection;

@end
