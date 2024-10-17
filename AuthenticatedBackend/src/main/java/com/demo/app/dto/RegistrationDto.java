package com.demo.app.dto;

import lombok.AllArgsConstructor;
import lombok.Data;
import lombok.NoArgsConstructor;

@Data
@NoArgsConstructor
@AllArgsConstructor
public class RegistrationDto{
    private String username;
    private String password;

    public String toString() {
        return "Registration info: username: " + this.username + " password: " + this.password;
    }
}
