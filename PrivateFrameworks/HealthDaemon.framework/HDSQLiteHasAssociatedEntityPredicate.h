/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDSQLiteHasAssociatedEntityPredicate : HDSQLitePredicate <NSCopying> {
    Class  _associatedEntityClass;
    HDSQLitePredicate * _associatedPredicate;
    BOOL  _inverted;
}

+ (id)predicateWithAssociatedEntityClass:(Class)arg1;
+ (id)predicateWithAssociatedEntityClass:(Class)arg1 associatedPredicate:(id)arg2 inverted:(BOOL)arg3;

- (void).cxx_destruct;
- (id)SQLForEntityClass:(Class)arg1;
- (void)bindToStatement:(struct sqlite3_stmt { }*)arg1 bindingIndex:(inout int*)arg2;

@end
