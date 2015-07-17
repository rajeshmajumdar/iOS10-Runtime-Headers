/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIDividerViewElement : SKUIViewElement {
    SKUIButtonViewElement * _button;
    int  _dividerType;
    BOOL  _dividerTypeWasInitialized;
    SKUIViewElementText * _text;
}

@property (nonatomic, readonly) SKUIButtonViewElement *button;
@property (nonatomic, readonly) int dividerType;
@property (nonatomic, readonly) SKUIViewElementText *text;

- (void).cxx_destruct;
- (id)button;
- (int)dividerType;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (BOOL)isEnabled;
- (int)pageComponentType;
- (id)text;

@end
