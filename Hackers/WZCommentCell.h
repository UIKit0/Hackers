//
//  WZCommentCell.h
//  Hackers
//
//  Created by Weiran Zhang on 08/11/2012.
//  Copyright (c) 2012 Weiran Zhang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <OHAttributedLabel/OHAttributedLabel.h>

@protocol WZCommentShowRepliesDelegate <NSObject>
- (void)selectedCommentAtIndexPath:(NSIndexPath *)indexPath;
@end

@protocol WZCommentURLRequested <NSObject>
- (void)tappedLink:(NSURL *)url;
@end

@interface WZCommentCell : UITableViewCell <OHAttributedLabelDelegate>

@property (weak, nonatomic) IBOutlet UILabel *userLabel;
@property (weak, nonatomic) IBOutlet UILabel *dateLabel;
@property (weak, nonatomic) IBOutlet OHAttributedLabel *commentLabel;

- (IBAction)showReplies:(id)sender;

@property (weak, nonatomic) IBOutlet UIButton *showRepliesButton;

@property (nonatomic) NSUInteger contentIndent;
@property (nonatomic) BOOL expanded;
@property (nonatomic) NSUInteger repliesCount;

@property (weak, nonatomic) id <WZCommentShowRepliesDelegate> delegate;
@property (weak, nonatomic) id <WZCommentURLRequested> linkDelegate;

@end