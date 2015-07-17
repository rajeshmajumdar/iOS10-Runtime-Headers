/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIInputViewSetNotificationInfo : NSObject {
    struct CGPoint { 
        float x; 
        float y; 
    }  _beginCenter;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _beginFrame;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _bounds;
    BOOL  _changedAccessoryOnly;
    float  _duration;
    struct CGPoint { 
        float x; 
        float y; 
    }  _endCenter;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _endFrame;
    BOOL  _forceNotification;
    unsigned int  _options;
}

@property (nonatomic) struct CGPoint { float x1; float x2; } beginCenter;
@property (nonatomic) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } beginFrame;
@property (nonatomic) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } bounds;
@property (nonatomic) BOOL changedAccessoryOnly;
@property (nonatomic) float duration;
@property (nonatomic) struct CGPoint { float x1; float x2; } endCenter;
@property (nonatomic) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } endFrame;
@property (nonatomic) BOOL forceNotification;
@property (nonatomic) unsigned int options;
@property (nonatomic, readonly) NSDictionary *privateUserInfo;
@property (nonatomic, readonly) NSDictionary *userInfo;

+ (id)info;

- (struct CGPoint { float x1; float x2; })beginCenter;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })beginFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (BOOL)changedAccessoryOnly;
- (BOOL)containsChange;
- (float)duration;
- (struct CGPoint { float x1; float x2; })endCenter;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })endFrame;
- (BOOL)forceNotification;
- (id)inverseInfo;
- (void)logGeometry;
- (unsigned int)options;
- (void)populateEndInfoWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)populateStartInfoWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)populateWithAnimationStyle:(id)arg1;
- (id)privateUserInfo;
- (void)setBeginCenter:(struct CGPoint { float x1; float x2; })arg1;
- (void)setBeginFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setChangedAccessoryOnly:(BOOL)arg1;
- (void)setDuration:(float)arg1;
- (void)setEndCenter:(struct CGPoint { float x1; float x2; })arg1;
- (void)setEndFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setForceNotification:(BOOL)arg1;
- (void)setOptions:(unsigned int)arg1;
- (id)userInfo;

@end
