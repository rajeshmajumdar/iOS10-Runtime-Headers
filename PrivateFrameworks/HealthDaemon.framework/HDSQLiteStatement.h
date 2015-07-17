/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDSQLiteStatement : NSObject {
    HDSQLiteDatabase * _database;
    BOOL  _didCache;
    struct sqlite3_stmt { } * _stmt;
}

@property (nonatomic, readonly) HDSQLiteDatabase *database;

- (void).cxx_destruct;
- (id)database;
- (void)dealloc;
- (void)finish;
- (id)initWithSQL:(id)arg1 database:(id)arg2 cache:(BOOL)arg3;
- (BOOL)performStatementWithError:(id*)arg1 bindingHandler:(id /* block */)arg2;

@end
