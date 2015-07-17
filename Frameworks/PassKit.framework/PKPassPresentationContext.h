/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKPassPresentationContext : NSObject {
    int  _animationStyle;
    id  _userInfo;
}

@property (nonatomic) int animationStyle;
@property (nonatomic, retain) id userInfo;

+ (id)contextWithAnimationStyle:(int)arg1;
+ (id)contextWithAnimationStyle:(int)arg1 userInfo:(id)arg2;

- (int)animationStyle;
- (void)dealloc;
- (void)setAnimationStyle:(int)arg1;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;

@end
