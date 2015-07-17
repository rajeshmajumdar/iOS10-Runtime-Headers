/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBUIApplicationSceneDeactivationManager : NSObject <BSDescriptionProviding, FBSceneManagerInternalObserver, FBSceneManagerObserver> {
    NSMutableArray * _activeBands;
    NSMutableSet * _eligibleScenes;
    FBScene * _updatingScene;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (BOOL)_areEligibleSceneSettings:(id)arg1 forProcess:(id)arg2;
- (id)_bandForSceneLevel:(float)arg1 createIfNeeded:(BOOL)arg2;
- (id)_deactivationBandsForLevel:(float)arg1;
- (unsigned int)_deactivationReasonsForScene:(id)arg1 withSettings:(id)arg2;
- (BOOL)_isEligibleDisplay:(id)arg1;
- (BOOL)_isEligibleProcess:(id)arg1;
- (BOOL)_isEligibleScene:(id)arg1;
- (BOOL)_isEligibleScene:(id)arg1 forSettings:(id)arg2;
- (void)_noteSceneWillUpdate:(id)arg1 oldSettings:(id)arg2 newSettings:(id)arg3;
- (void)_setDeactivationReasons:(unsigned int)arg1 onScene:(id)arg2 withSettings:(id)arg3;
- (void)_trackScene:(id)arg1;
- (void)_untrackScene:(id)arg1;
- (void)_updateAllScenesForBand:(id)arg1 withTransitionContext:(id)arg2;
- (void)addAssertion:(id)arg1 withTransitionContext:(id)arg2;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)init;
- (void)removeAssertion:(id)arg1;
- (void)sceneManager:(id)arg1 amendSettings:(id)arg2 forUpdatingScene:(id)arg3;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
