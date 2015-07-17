/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKRemoteUIController : NSObject <GKRemoteUIAuxiliaryViewDelegate, RUILoaderDelegate, RUIObjectModelDelegate> {
    NSString * _alias;
    NSString * _appleID;
    NSDictionary * _authInfo;
    NSString * _authToken;
    BOOL  _complete;
    id /* block */  _completionHandler;
    NSError * _error;
    NSString * _firstName;
    NSString * _lastName;
    int  _layoutStyle;
    id /* block */  _loadHandler;
    RUILoader * _loader;
    BOOL  _loading;
    BOOL  _loadingInitialUI;
    UINavigationController * _navigationControllerWeak;
    NSMutableArray * _objectModels;
    NSString * _playerID;
    GKRemoteUIController * _presentedRemoteUIController;
    BOOL  _previousUseCustomBackButtonActionValue;
    NSData * _pushToken;
    BOOL  _shouldApplyGameCenterTheme;
    NSArray * _staticViewControllers;
    NSURL * _url;
}

@property (nonatomic, retain) NSString *alias;
@property (nonatomic, retain) NSString *appleID;
@property (nonatomic, retain) NSDictionary *authInfo;
@property (nonatomic, retain) NSString *authToken;
@property (nonatomic, readonly) NSString *bagKey;
@property (nonatomic) BOOL complete;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, readonly) NSURL *fallbackURL;
@property (nonatomic, retain) NSString *firstName;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSString *lastName;
@property (nonatomic) int layoutStyle;
@property (nonatomic, copy) id /* block */ loadHandler;
@property (nonatomic, retain) RUILoader *loader;
@property (nonatomic) BOOL loading;
@property (nonatomic) BOOL loadingInitialUI;
@property (nonatomic) UINavigationController *navigationController;
@property (nonatomic, retain) NSMutableArray *objectModels;
@property (nonatomic, retain) NSString *playerID;
@property (nonatomic, retain) GKRemoteUIController *presentedRemoteUIController;
@property (nonatomic) BOOL previousUseCustomBackButtonActionValue;
@property (nonatomic, retain) NSData *pushToken;
@property (nonatomic) BOOL shouldApplyGameCenterTheme;
@property (nonatomic, retain) NSArray *staticViewControllers;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSURL *url;
@property (getter=isUserInteractionEnabled, nonatomic) BOOL userInteractionEnabled;

+ (id)remoteUIController;

- (id)addThemeInfoToAttributes:(id)arg1;
- (id)alias;
- (id)appleID;
- (id)authInfo;
- (id)authToken;
- (void)auxiliaryView:(id)arg1 pressedButton:(id)arg2 attributes:(id)arg3;
- (void)auxiliaryView:(id)arg1 pressedLink:(id)arg2 attributes:(id)arg3;
- (id)bagKey;
- (BOOL)complete;
- (id /* block */)completionHandler;
- (void)configureFromBagKey:(id)arg1 player:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)dealloc;
- (void)didLoadURL:(id)arg1 data:(id)arg2 error:(id)arg3;
- (id)error;
- (id)fallbackURL;
- (void)finishLoadingWithError:(id)arg1;
- (void)fireCompletionHandler;
- (id)firstName;
- (int)indexOfVisiblePage;
- (id)init;
- (id)initWithObjectModel:(id)arg1;
- (BOOL)isUserInteractionEnabled;
- (id)lastName;
- (int)layoutStyle;
- (id /* block */)loadHandler;
- (void)loadInitialRemoteUIWithHandler:(id /* block */)arg1;
- (void)loadURL:(id)arg1 postBody:(id)arg2;
- (void)loadURL:(id)arg1 postData:(id)arg2;
- (id)loader;
- (void)loader:(id)arg1 didFailWithError:(id)arg2;
- (void)loader:(id)arg1 receivedObjectModel:(id)arg2 actionSignal:(int)arg3;
- (BOOL)loading;
- (BOOL)loadingInitialUI;
- (id)navigationController;
- (void)objectModel:(id)arg1 configureTableRow:(id)arg2 page:(id)arg3;
- (void)objectModel:(id)arg1 configureTableSection:(id)arg2 page:(id)arg3;
- (void)objectModel:(id)arg1 configureTableView:(id)arg2 page:(id)arg3;
- (Class)objectModel:(id)arg1 customFooterClassForSection:(id)arg2;
- (Class)objectModel:(id)arg1 customHeaderClassForSection:(id)arg2;
- (void)objectModel:(id)arg1 page:(id)arg2 toggledEditing:(BOOL)arg3;
- (void)objectModel:(id)arg1 pressedButton:(id)arg2 attributes:(id)arg3;
- (void)objectModel:(id)arg1 pressedLink:(id)arg2 httpMethod:(id)arg3;
- (BOOL)objectModel:(id)arg1 shouldShowModalHTMLViewWithURL:(id)arg2;
- (id)objectModel:(id)arg1 tableFooterViewForAttributes:(id)arg2 page:(id)arg3;
- (id)objectModel:(id)arg1 tableHeaderViewForAttributes:(id)arg2 page:(id)arg3;
- (void)objectModelDidChange:(id)arg1;
- (void)objectModelPressedBack:(id)arg1;
- (id)objectModels;
- (id)parentViewControllerForObjectModel:(id)arg1;
- (void)performAction:(int)arg1 withObjectModel:(id)arg2;
- (id)playerID;
- (void)popObjectModelAnimated:(BOOL)arg1;
- (id)postBodyForInitialLoad;
- (id)postbackDataForDictionary:(id)arg1;
- (int)preferredLayoutStyle;
- (void)presentInParentNavigationController:(id)arg1 animated:(BOOL)arg2;
- (void)presentObjectModel:(id)arg1 animated:(BOOL)arg2;
- (id)presentedRemoteUIController;
- (BOOL)previousUseCustomBackButtonActionValue;
- (void)pushObjectModel:(id)arg1 animated:(BOOL)arg2;
- (id)pushToken;
- (void)replaceObjectModelAtIndex:(unsigned int)arg1 withObjectObjectModel:(id)arg2;
- (void)setAlias:(id)arg1;
- (void)setAppleID:(id)arg1;
- (void)setAuthInfo:(id)arg1;
- (void)setAuthToken:(id)arg1;
- (void)setComplete:(BOOL)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setError:(id)arg1;
- (void)setFirstName:(id)arg1;
- (void)setLastName:(id)arg1;
- (void)setLayoutStyle:(int)arg1;
- (void)setLoadHandler:(id /* block */)arg1;
- (void)setLoader:(id)arg1;
- (void)setLoading:(BOOL)arg1;
- (void)setLoadingInitialUI:(BOOL)arg1;
- (void)setNavigationController:(id)arg1;
- (void)setObjectModels:(id)arg1;
- (void)setPlayerID:(id)arg1;
- (void)setPresentedRemoteUIController:(id)arg1;
- (void)setPreviousUseCustomBackButtonActionValue:(BOOL)arg1;
- (void)setPushToken:(id)arg1;
- (void)setShouldApplyGameCenterTheme:(BOOL)arg1;
- (void)setStaticViewControllers:(id)arg1;
- (void)setUrl:(id)arg1;
- (void)setUserInteractionEnabled:(BOOL)arg1;
- (BOOL)shouldApplyGameCenterTheme;
- (id)staticViewControllers;
- (void)takeValuesFromClientInfo:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)updateAccountAndMarkComplete:(BOOL)arg1 completionHandler:(id /* block */)arg2;
- (void)updatePostbackDictionary:(id)arg1 withHandler:(id /* block */)arg2;
- (id)url;
- (id)viewControllers;

@end
