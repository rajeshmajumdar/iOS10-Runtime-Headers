/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDebuggingInformationViewController : UIViewController <UIDebuggingInformationValueViewObserver, UITableViewDataSource, UITableViewDelegate> {
    NSMutableDictionary * _controlsForKeys;
    NSMutableArray * _keys;
    NSMutableDictionary * _managedValues;
    NSMutableDictionary * _observersForKeys;
    UITableView * _valueTableView;
}

@property (nonatomic, retain) NSMutableDictionary *controlsForKeys;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSMutableArray *keys;
@property (nonatomic, retain) NSMutableDictionary *managedValues;
@property (nonatomic, retain) NSMutableDictionary *observersForKeys;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITableView *valueTableView;

- (void).cxx_destruct;
- (id)_observersForKey:(id)arg1;
- (void)addPropertyForKey:(id)arg1 ofType:(int)arg2 defaultValue:(id)arg3 minimumValue:(id)arg4 maximumValue:(id)arg5;
- (void)addPropertyObserver:(id)arg1 forKey:(id)arg2;
- (id)controlsForKeys;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)keys;
- (id)managedValues;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)observersForKeys;
- (void)removePropertyObserver:(id)arg1 forKey:(id)arg2;
- (void)setControlsForKeys:(id)arg1;
- (void)setKeys:(id)arg1;
- (void)setManagedValues:(id)arg1;
- (void)setObserversForKeys:(id)arg1;
- (void)setValueTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (id)valueTableView;
- (void)valueWithKey:(id)arg1 changedToValue:(id)arg2;
- (void)viewDidLoad;

@end
