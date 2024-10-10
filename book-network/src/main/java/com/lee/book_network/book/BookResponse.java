package com.lee.book_network.book;

import lombok.AllArgsConstructor;
import lombok.Builder;
import lombok.Data;
import lombok.NoArgsConstructor;

@Data
@AllArgsConstructor
@NoArgsConstructor
@Builder
public class BookResponse {
    private Integer id;
    private String title;
    private String authorName;
    private String isbn;
    private String synopsys;
    private String owner;

    private byte[] cover;

    private double rate;
    private boolean archived;
    private boolean sharable;
}
