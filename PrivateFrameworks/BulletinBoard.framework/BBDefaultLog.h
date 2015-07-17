/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBDefaultLog : BSFileLogger {
    NSMutableSet * _knownCategories;
}

- (void)_setEnabled:(BOOL)arg1;
- (void)_setLevel:(int)arg1;
- (BOOL)_shouldEnableCategory:(id)arg1;
- (void)dealloc;
- (id)init;
- (int)level;
- (unsigned int)logDestinations;
- (id)logPath;
- (id)logPreferenceDomain;
- (id)logPreferenceName;
- (id)name;
- (void)reloadFromDefaults;

@end
