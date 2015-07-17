/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WelcomeKitUI.framework/WelcomeKitUI
 */

@interface WLMigrationProgressViewController : WLBuddyPaneViewController <UITableViewDataSource, UITableViewDelegate, WLDataMigrationDelegate> {
    WLDeviceAuthentication * _auth;
    unsigned int  _dataTypes;
    WLSourceDevice * _device;
    BOOL  _migrationConcluded;
    WLDataMigrationController * _migrationController;
    BOOL  _migrationControllerIsRestartable;
    UITableViewCell * _progressBarCell;
    NSString * _progressString;
    UITableViewCell * _progressTextCell;
    UIProgressView * _progressView;
    UITableViewCell * _transferTextCell;
}

@property (nonatomic, readonly, retain) WLDeviceAuthentication *auth;
@property (nonatomic, readonly) unsigned int dataTypes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, retain) WLSourceDevice *device;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly, retain) WLDataMigrationController *migrationController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_didCompleteMigrationWithSuccess:(BOOL)arg1;
- (id)_progressBarCell;
- (id)_progressTextCell;
- (id)_transferTextCell;
- (id)auth;
- (void)dataMigrator:(id)arg1 didFailWithError:(id)arg2;
- (void)dataMigrator:(id)arg1 didUpdateProgressPercentage:(float)arg2;
- (void)dataMigrator:(id)arg1 didUpdateProgressString:(id)arg2;
- (void)dataMigratorDidBecomeRestartable:(id)arg1;
- (void)dataMigratorDidFinish:(id)arg1 withImportErrors:(BOOL)arg2;
- (void)dataMigratorDidGetInterrupted;
- (unsigned int)dataTypes;
- (id)device;
- (id)initWithSourceDevice:(id)arg1 dataTypes:(unsigned int)arg2 authentication:(id)arg3;
- (void)loadView;
- (id)migrationController;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;

@end
