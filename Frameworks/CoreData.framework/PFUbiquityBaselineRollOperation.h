/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquityBaselineRollOperation : PFUbiquityBaselineOperation {
    PFUbiquityBaselineHeuristics * _heuristics;
}

@property NSObject<PFUbiquityBaselineRollOperationDelegate> *delegate;

- (void)dealloc;
- (id)delegate;
- (BOOL)haveConsistentStateForBaselineRoll;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (void)main;
- (id)retainedDelegate;
- (BOOL)rollBaselineWithError:(id*)arg1;
- (void)setDelegate:(id)arg1;

@end
