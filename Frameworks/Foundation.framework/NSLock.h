/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSLock : NSObject <NSLocking> {
    void * _priv;
}

@property (copy) NSString *name;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (void)dealloc;
- (id)description;
- (void)finalize;
- (id)init;
- (void)lock;
- (BOOL)lockBeforeDate:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (BOOL)tryLock;
- (void)unlock;

// Image: /System/Library/PrivateFrameworks/MIME.framework/MIME

- (void)mf_waitForLock;

@end
