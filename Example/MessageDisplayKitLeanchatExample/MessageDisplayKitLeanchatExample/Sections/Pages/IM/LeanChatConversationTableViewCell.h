//
//  LeanChatConversationTableViewCell.h
//  MessageDisplayKitLeanchatExample
//
//  Created by lzw on 15/4/17.
//  Copyright (c) 2015年 嗨，我是曾宪华(@xhzengAIB)，曾加入YY Inc.担任高级移动开发工程师，拍立秀App联合创始人，热衷于简洁、而富有理性的事物 QQ:543413507 主页:http://zengxianhua.com All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVOSCloudIM/AVOSCloudIM.h>

static CGFloat kConversationTableViewCellImageSize=35;
static CGFloat kConversationTableViewCellVerticalSpacing=8;
static CGFloat kConversationTableViewCellHorizontalSpacing=10;

@interface LeanChatConversationTableViewCell : UITableViewCell

+(NSString*)indentifier;

+(CGFloat)heightOfConversationTableViewCell;

@property (nonatomic, strong) AVIMConversation *conversation;

@end
