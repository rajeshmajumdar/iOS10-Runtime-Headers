/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameController.framework/GameController
 */

@interface _GCMFiExtendedGamepadControllerProfile : _GCExtendedGamepad <_GCACHomeButtonDelegate> {
    _GCACHomeButton * _acHome;
    GCMotion * _motion;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)handleReport:(unsigned int)arg1 data:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithController:(id)arg1;
- (id)inputForElement:(struct __IOHIDElement { }*)arg1;
- (id)motion;
- (id)name;
- (void)setPlayerIndex:(int)arg1;
- (void)set_motion:(id)arg1;
- (void)toggleSuspendResume;

@end
