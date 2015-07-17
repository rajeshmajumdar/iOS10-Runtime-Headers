/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBObserverGatewayAddBulletinRequest : NSObject {
    NSString * _bulletinID;
    NSString * _sectionID;
    NSDate * _timeout;
    id /* block */  _timeoutHandler;
}

@property (nonatomic, retain) NSString *bulletinID;
@property (nonatomic, retain) NSString *sectionID;
@property (nonatomic, retain) NSDate *timeout;
@property (nonatomic, copy) id /* block */ timeoutHandler;

- (id)bulletinID;
- (void)dealloc;
- (id)sectionID;
- (void)setBulletinID:(id)arg1;
- (void)setSectionID:(id)arg1;
- (void)setTimeout:(id)arg1;
- (void)setTimeoutHandler:(id /* block */)arg1;
- (id)timeout;
- (id /* block */)timeoutHandler;

@end
