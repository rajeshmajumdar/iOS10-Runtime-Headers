/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameController.framework/GameController
 */

@interface _GCControllerAxisButtonInput : _GCControllerButtonInput {
    _GCControllerAxisInput * _axis;
    BOOL  _positive;
}

@property (nonatomic) _GCControllerAxisInput *axis;
@property (getter=isPositive, nonatomic, readonly) BOOL positive;

- (void).cxx_destruct;
- (BOOL)_setValue:(float)arg1;
- (BOOL)_setValue:(float)arg1 queue:(id)arg2;
- (BOOL)_setValueFromAxisButton:(float)arg1;
- (BOOL)_setValueFromAxisButton:(float)arg1 queue:(id)arg2;
- (id)axis;
- (id)collection;
- (id)description;
- (id)initWithAxis:(id)arg1 positive:(BOOL)arg2;
- (BOOL)isAnalog;
- (BOOL)isPositive;
- (void)setAxis:(id)arg1;
- (BOOL)setHIDValue:(struct __IOHIDValue { }*)arg1;
- (BOOL)setHIDValue:(struct __IOHIDValue { }*)arg1 queue:(id)arg2;
- (float)value;

@end
