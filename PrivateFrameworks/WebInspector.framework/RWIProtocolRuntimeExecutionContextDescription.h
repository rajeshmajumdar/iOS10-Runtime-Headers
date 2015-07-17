/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

@interface RWIProtocolRuntimeExecutionContextDescription : RWIProtocolJSONObject

@property (nonatomic, copy) NSString *frameId;
@property (nonatomic) int identifier;
@property (nonatomic) BOOL isPageContext;
@property (nonatomic, copy) NSString *name;

- (id)frameId;
- (int)identifier;
- (id)initWithIdentifier:(int)arg1 isPageContext:(BOOL)arg2 name:(id)arg3 frameId:(id)arg4;
- (BOOL)isPageContext;
- (id)name;
- (void)setFrameId:(id)arg1;
- (void)setIdentifier:(int)arg1;
- (void)setIsPageContext:(BOOL)arg1;
- (void)setName:(id)arg1;

@end
