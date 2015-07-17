/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIDocumentPickerContainerCell : _UIDocumentPickerCell {
    NSLayoutConstraint * _containerIconBottomConstraint;
    NSLayoutConstraint * _containerIconHeightConstraint;
    UIImageView * _containerIconView;
    NSLayoutConstraint * _containerIconWidthConstraint;
    id  _observerToken;
}

@property (nonatomic, retain) NSLayoutConstraint *containerIconBottomConstraint;
@property (nonatomic, retain) NSLayoutConstraint *containerIconHeightConstraint;
@property (nonatomic, retain) UIImageView *containerIconView;
@property (nonatomic, retain) NSLayoutConstraint *containerIconWidthConstraint;
@property (nonatomic, retain) id observerToken;

- (void).cxx_destruct;
- (id)containerIconBottomConstraint;
- (id)containerIconHeightConstraint;
- (id)containerIconView;
- (id)containerIconWidthConstraint;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)observerToken;
- (void)prepareForReuse;
- (void)reloadItem:(BOOL)arg1;
- (void)setContainerIconBottomConstraint:(id)arg1;
- (void)setContainerIconHeightConstraint:(id)arg1;
- (void)setContainerIconView:(id)arg1;
- (void)setContainerIconWidthConstraint:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setObserverToken:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateContents;

@end
