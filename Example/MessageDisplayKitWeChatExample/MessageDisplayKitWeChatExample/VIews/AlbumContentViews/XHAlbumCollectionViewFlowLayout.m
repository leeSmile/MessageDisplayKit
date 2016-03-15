//
//  XHAlbumCollectionViewFlowLayout.m
//  MessageDisplayExample
//
//  Created by 曾 宪华 on 14-5-21.
//  Copyright (c) 2014年 嗨，我是曾宪华(@xhzengAIB)，曾加入YY Inc.担任高级移动开发工程师，拍立秀App联合创始人，热衷于简洁、而富有理性的事物 QQ:543413507 主页:http://zengxianhua.com All rights reserved.
//

#import "XHAlbumCollectionViewFlowLayout.h"

#import "XHAlbum.h"

@implementation XHAlbumCollectionViewFlowLayout

- (id)init {
    self = [super init];
    if (self) {
        self.itemSize = CGSizeMake(kXHAlbumPhotoSize, kXHAlbumPhotoSize);
        self.minimumInteritemSpacing = kXHAlbumPhotoInsets;
        self.minimumLineSpacing = kXHAlbumPhotoInsets;
    }
    return self;
}

@end
