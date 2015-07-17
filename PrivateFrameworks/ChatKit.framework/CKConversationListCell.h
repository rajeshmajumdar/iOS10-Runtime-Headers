/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKConversationListCell : UITableViewCell <CNAvatarViewDelegate> {
    CKAvatarView * _avatarView;
    UIImageView * _chevronImageView;
    CKConversation * _conversation;
    UIDateLabel * _dateLabel;
    UILabel * _fromLabel;
    BOOL  _isPlaceholder;
    NSDate * _searchMessageDate;
    NSString * _searchMessageGUID;
    NSString * _searchSummaryText;
    UILabel * _summaryLabel;
    UIImageView * _unreadIndicatorImageView;
    UIViewController * _viewController;
}

@property (nonatomic, retain) CKAvatarView *avatarView;
@property (nonatomic, retain) CKConversation *conversation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSDate *searchMessageDate;
@property (nonatomic, copy) NSString *searchMessageGUID;
@property (nonatomic, copy) NSString *searchSummaryText;
@property (readonly) Class superclass;
@property (nonatomic) UIViewController *viewController;

+ (float)cellHeight;
+ (id)identifierForConversation:(id)arg1;

- (void)_calculateLayoutFrames;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)_setupAvatarViewIfNeeded;
- (id)avatarView;
- (id)conversation;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)searchMessageDate;
- (id)searchMessageGUID;
- (id)searchSummaryText;
- (void)setAvatarView:(id)arg1;
- (void)setConversation:(id)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSearchMessageDate:(id)arg1;
- (void)setSearchMessageGUID:(id)arg1;
- (void)setSearchSummaryText:(id)arg1;
- (void)setViewController:(id)arg1;
- (BOOL)showingEditControl;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)superLayoutSubviews;
- (void)updateContentsForConversation:(id)arg1;
- (void)updateWithSearchResult:(id)arg1;
- (id)viewController;

@end
